#include <iostream>
using namespace std;

int main() {
    long long id;
    int age, seats;
    char seatClass;
    
    cout << "Please, enter the ID number and your age:" << endl;
    cin >> id >> age;
    
    if (age >= 18) {
        cout << "Please enter A B or C to choose the seat class" << endl;
        cin >> seatClass;
        
        int price = 0;
        if (seatClass == 'A' || seatClass == 'a') {
            price = 100;
        } else if (seatClass == 'B' || seatClass == 'b') {
            price = 75;
        } else if (seatClass == 'C' || seatClass == 'c') {
            price = 50;
        } else {
            cout << "Invalid class type!" << endl;
            return 0;
        }
        
        cout << "Please enter the number of seats you want to book:" << endl;
        cin >> seats;
        
        cout << "Total cost = " << seats * price << endl;
    } else {
        cout << "Sorry... You are not allowed to book a seat" << endl;
    }
    
    return 0;
}
