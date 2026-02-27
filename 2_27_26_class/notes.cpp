static int n_students;

a static function cannot access instance members of the class
static int getN_students(){
    return n_students;
}