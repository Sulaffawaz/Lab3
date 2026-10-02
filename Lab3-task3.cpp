#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3, avg;
    
    cout << "Enter three courses scores: ";
    cin >> s1 >> s2 >> s3;
    
    avg = (s1 + s2 + s3) / 3.0;
    
    if (avg >= 90 && avg <= 100) {
        cout << "Grade A" << endl;
    } else if (avg >= 70 && avg < 90) {
        cout << "Grade B" << endl;
    } else if (avg >= 50 && avg < 70) {
        cout << "Grade C" << endl;
    } else if (avg < 50) {
        cout << "Grade F" << endl;
    } else {
        cout << "Invalid scores!" << endl;
    }
    
    return 0;
}
