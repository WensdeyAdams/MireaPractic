#ifndef MIREAPRACTIC_RATIONAL_H
#define MIREAPRACTIC_RATIONAL_H


class rational {
private:
    int a, b;
    void reduce();

public:

    rational(int a1 = 0, int b1 = 1);

    void set(int a1, int b1);

    void show();

};


#endif //MIREAPRACTIC_RATIONAL_H
