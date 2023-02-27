#include "cmath"
#include "triangle.h"
#include "iostream"

triangle::triangle(): first_side(0), second_side(0), third_side(0) {}

triangle::triangle(double a, double b, double c):
        first_side(a), second_side(b), third_side(c){}

bool triangle::exst_tr(){
    return ((first_side + second_side > third_side) && (second_side + third_side > first_side) && (first_side + third_side > second_side));
}

double triangle::show(){
    std::cout << first_side << " " << second_side << " " << third_side << std::endl;
    return 0;
}

double triangle::perimetr(){
    return first_side + second_side + third_side;
}

double triangle::square(){
    double temp = (first_side + second_side + third_side) / 2;
    return sqrt(temp* (temp - first_side) * (temp - second_side) * (temp - third_side));
}


