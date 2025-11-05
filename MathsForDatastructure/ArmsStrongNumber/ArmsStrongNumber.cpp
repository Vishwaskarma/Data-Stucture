#include <iostream>
using namespace std;

int findCube(int n) {
    return n * n * n;
}

bool isArmstrong(int num) {
    if (num < 1) return false;
    
    int original = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += findCube(digit);
        num /= 10;
    }
    
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isArmstrong(n))
        cout << n << " is an Armstrong number!" << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;
        
    return 0;
}