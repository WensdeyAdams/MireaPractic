#include "figure.h"
#include "iostream"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    for (int i = 1; i < 4; i++) {
        cout << "enter the coordinates of the first point (xy):" << endl;
        cin >> x1 >> y1;
        cout << "enter the coordinates of the second point (xy):" << endl;
        cin >> x2 >> y2;
        cout << "enter the coordinates of the third point (xy):" << endl;
        cin >> x3 >> y3;
        cout << "enter the coordinates of the fourth point (xy):" << endl;
        cin >> x4 >> y4;

        figure fig(x1, x2, x3, x4, y1, y2, y3, y4);
        fig.show();
        if (fig.is_square()) {
            cout << "The figure is a square: " << endl;
        } else if (fig.is_romb()) {
            cout << "The figure is a romb: " << endl;
        } else if (fig.is_prug()) {
            cout << "The figure is a rectangle: " << endl;
        } else {
            cout << "The figure is a quadrilateral: " << endl;
        }

        if (fig.is_in_circle()) {
            cout << "The circle can be included in this figure" << endl;
        } else {
            cout << "The circle cannot be included in this figure" << endl;
        }
        if (fig.is_out_circle()) {
            cout << "This figure can be included in circle" << endl;
        } else {
            cout << "This figure cannot be included in circle" << endl;
        }
    }
    return 0;
};