#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Please enter the temperature and measurement system (c or f): ";
    cin >> temp >> unit;

    if (unit == 'c' || unit == 'C') {
        double f = (temp * 9.0 / 5.0) + 32;
        cout << f << " degrees Fahrenheit" << endl; // أضفنا كلمة degrees ومسافة
    }
    else if (unit == 'f' || unit == 'F') {
        double c = (temp - 32) * 5.0 / 9.0;
        cout << c << " degrees Celsius" << endl; // أضفنا كلمة degrees ومسافة
    }
    else 
        cout << "Sorry the unit of measure is not recognized";

    return 0;
}
