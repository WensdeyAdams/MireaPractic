#ifndef MIREAPRACTIC_TRIANGLE_H
#define MIREAPRACTIC_TRIANGLE_H


class triangle {
private:
    double first_side;
    double second_side;
    double third_side;

public:
    triangle();

    triangle(double a, double b, double c);

    bool exst_tr();

    double show();

    double perimetr();

    double square();

};


#endif //MIREAPRACTIC_TRIANGLE_H
