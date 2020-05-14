#include "Figure.h"
#include "Intersection.h"
#include <cmath>
#include <cstring>
#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    char name[10];
    float area1, area2;
    int x1, y1, x2, y2;
    int rad1, rad2;
    float per1, per2;
    int intsect;
    cout << "Input name figure: ";
    cin >> name;
    cout << "Radius first circle: ";
    cin >> rad1;
    if (rad1 <= 0)
        return 0;
    if (Figure(name) == 0) {
        cout << "Input coordinates first circle: ";
        cin >> x1 >> y1;
    }
    area1 = PI * pow(rad1, 2);
    if (area1 <= 0)
        return 0;
    per1 = 2 * PI * rad1;
    cout << "Input coordinates second circle: ";
    cin >> x2 >> y2;
    cout << "Input radius: ";
    cin >> rad2;
    area2 = PI * pow(rad2, 2);
    if (area2 <= 0)
        return 0;
    per2 = 2 * PI * rad2;
    intsect = Intersection(x1, y1, x2, y2, rad1, rad2);
    if (intsect == 0) {
        cout << "Circles do intersect" << endl;
    } else
        cout << "Circles do not intersect" << endl;

    cout << name << " " << x1 << " " << x2 << " " << y1 << " " << rad1 << endl;
    cout << "Area: " << area1 << endl;
    cout << "Perimetr: " << per1 << endl;
    cout << name << " " << x2 << " " << y2 << " " << rad2 << endl;
    cout << "Area: " << area2 << endl;
    ;
    cout << "Perimetr: " << per2;

    return 0;
}
