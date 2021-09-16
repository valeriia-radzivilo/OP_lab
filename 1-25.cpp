#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float hyp;
    float leg1;
    //гіпотенуза
    cout << "hypotenuse=";
    cin >> hyp;
    //перший катет
    cout << "leg 1=";
    cin >> leg1;
    // другий катет
    float leg2 =pow( pow(hyp,2.0)-pow(leg1,2.0), 0.5);
    cout << "leg 2 ="<< leg2;
    return 0 ;
}