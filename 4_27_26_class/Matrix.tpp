#include "Matrix.hpp"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <fstream> // for ifstream function to retrieve file inputs.

template <typename T>
Matrix<T>::Matrix(int r, int c) : rows(r), cols(c){
if(rows < 1 || cols < 1){
    rows = cols = 0;
    data = nullptr;
    throw std::logic_error("Rows and Columns should be positive");
}

// allocate an array of T pointers
data = new T*[rows];

for(int i = 0; i < rows; i++){
    data[i] = new T[cols];
}

// initialize the matrix.
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        data[i][j] = T(); // T() is the default template value.
    }
}

}

template <typename T>
void Matrix<T>::print() const{
    for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        std::cout << std::left << std::setw(6) << data[i][j] << std::endl;
    }
    std::cout << "\n";
}
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename){
    std::ifstream in(filename);
    if(!in){ // chgecks if "in" is the nullptr meaning we couldn't retrieve the file contents.
        throw std::invalid_argument(std::string("Cannot open the file ") + filename);
    }

    int r, c;
    in >> r >> c; // takes the first two things in the file and understands them as the rows and columns.
    Matrix m(r,c);
    
    //scan the data.
    for(int i = 0; i < m.rows; i++){
        for(int j = 0; j < m.cols; j++){
        in >> m.data[i][j];
    }
    }

    in.close(); // closing the ifstream object.
    return m;
}