
#ifndef MATRIX_HPP
#define MATRIX_HPP
template <typename T>
class Matrix {
public:
    Matrix(int r=1, int c=1);
    void print() const;
    ~Matrix(); // destructor.
    Matrix(const Matrix<T>& other); // copy constructor.
    Matrix<T>& operator=(const Matrix<T>& other); // assignment operator.
    Matrix<T> operator+(const Matrix<T>& other); // should throw an exception if the rows and columns do not match.
    // can make a multiplication operator if you want.
    static Matrix<T> load(const char* filename);

private:
    int rows, cols;
    T** data;
};

#include "Matrix.tpp"
#endif