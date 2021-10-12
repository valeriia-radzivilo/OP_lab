#include <iostream>
using namespace std;
int main() {
//a1x + b1y = c1
//x=(c1-b1y)/a1
//a2x + b2y = c2
//y= (c2-a2x)/b2
    float a1, a2, b1, b2, c1, c2, x, y;
    cout << "a1=";
    cin >> a1;
    cout << "a2=";
    cin >> a2;
    cout << "b1=";
    cin >> b1;
    cout << "b2=";
    cin >> b2;
    cout << "c1=";
    cin >> c1;
    cout << "c2=";
    cin >> c2;
//c1 = a1 * x + b1 * y;
//c2 = a2 * x + b2 * y;
    if (b1 == b2 || a1 == a2) {
        if (b1 == 0 || a2 == 0) {
            if (a1 != a2 || b1 != b2) {
                cout << "no";
                return 0;
            }
        }
    }
    if (b1 == b2 && a1 == a2 && c1 != c2){
        cout << "no";
        return 0;
    }
else {

    y = (c2 - a2 * c1 / a1) / (b2 - a2 * b1 / a1);
    x = (c1 - b1 * y) / a1;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}

return 0;
}
