#include "iostream"
#include "circle.h"
using namespace std;

int main() {
    float r, x, y;
    float a, b, c;
    float r1, x1, y1;
    for (int i = 1; i < 4; i ++) {
        cout << "Enter the radius and coordinates for circle " << i <<":" <<endl;
        cin >> r >> x >> y;
        circle krug(r, x, y);
        cout << "Circle " << i << "square = " << krug.square() << endl;
        cout << "Enter the sides of the triangle you want to fit around the circle:" <<endl;
        cin >> a >> b >> c;
        if (!krug.triangle_around(a, b, c)) {
            cout << "A triangle with such dimensions cannot be inscribed around a circle" <<endl;
        }
        else {
            cout << "A triangle with such dimensions can be inscribed around a circle" <<endl;
        }
        cout << "Enter the sides of the triangle you want to fit into the circle:" <<endl;
        cin >> a >> b >> c;
        if (!krug.triangle_in(a, b, c)) {
            cout << "A triangle with such dimensions cannot be inscribed in a circle" <<endl;
        }
        else {
            cout << "A triangle with such dimensions can be inscribed in a circle" <<endl;
        }
        cout << "Enter the radius and coordinates for a new circle to check if it intersects with circle " << i <<endl;
        cin >> r1, x1, y1;
        bool intersects = krug.check_circle(r1, x1, y1);
        if (intersects) {
            cout << "The new circle intersects with circle" <<i<< endl;
        } else {
            cout << "The new circle does not intersect with circle " <<i << endl;
        }
        cout << "Enter new values for this circle: "<< endl;
        cin >> r >> x >> y;
        krug.set_circle(r, x, y);
        cout << "Circle changed"<< endl;
    }
    return 0;

}