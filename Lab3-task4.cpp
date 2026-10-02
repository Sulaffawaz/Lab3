#include <iostream>
using namespace std;

int main() {
    int age;
    double weight, length, calories;
    char gender;
    
    cout << "Enter age, weight (kg), length (cm) and gender (m/f): ";
    cin >> age >> weight >> length >> gender;
    
    if (gender == 'm' || gender == 'M') {
        calories = 6.25 * length + 10 * weight - age * 5 + 5;
        cout << "Calories needed: " << calories << endl;
    } else if (gender == 'f' || gender == 'F') {
        calories = 6.25 * length + 10 * weight - age * 5 - 161;
        cout << "Calories needed: " << calories << endl;
    } else {
        cout << "Invalid gender!" << endl;
    }
    
    return 0;
}
