#include "iostream"
#include "triangle.h"
using namespace std;

int main() {
    triangle mas[3];
    double a, b, c;
    for (int i=0; i<3; i++) {
        cout << "Enter a, b and c for triangle " << i+1 << endl;
        cin >> a >> b >> c;
        mas[i] = triangle(a, b, c);
        if (!mas[i].exst_tr()) {
            mas[i].show();
            cout << "There is no triangle with such sides, try again" << endl;
            i--;
        }
    }
    for (int i=0; i<3; i++) {
        mas[i].show();
        cout << "The perimeter of the triangle: " << mas[i].perimetr() << endl;
        cout << "The area of the triangle: " << mas[i].square() << endl;
    }
    return 0;
}
