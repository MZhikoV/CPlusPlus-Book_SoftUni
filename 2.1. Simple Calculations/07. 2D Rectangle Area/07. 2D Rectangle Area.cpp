#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double a = fabs(x1 - x2);
    double b = fabs(y1 - y2);

    double area = a * b;
    double perim = 2 * a + 2 * b;

    cout << area << endl;
    cout << perim << endl;

    return 0;
}
