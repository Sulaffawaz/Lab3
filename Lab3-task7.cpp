#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    switch (num % 2) {
        case 0:
            cout << num << " is Even number" << endl;
            break;
        case 1:
        case -1:
            cout << num << " is Odd number" << endl;
            break;
    }
    
    return 0;
}
