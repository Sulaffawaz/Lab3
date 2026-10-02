#include <iostream>
using namespace std;

int main() {
    double price, total_cost;
    int items;
    
    cout << "Enter item price: ";
    cin >> price;
    cout << "Enter No items: ";
    cin >> items;
    
    total_cost = price * items;
    
    if (price >= 100 && items > 2) {
        total_cost = total_cost * 0.95; // 5% discount
    } else {
        total_cost = total_cost + 10; // 10 SR delivery cost
    }
    
    if (total_cost > 1000) {
        total_cost = total_cost * 0.95; // Additional 5% discount
    }
    
    cout << "Total cost = " << total_cost << endl;
    
    return 0;
}
