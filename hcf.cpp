#include<iostream>
using namespace std;

int main() {
    int a, b, hcf;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    
    while (b != 0) {
        hcf = a % b;  // Find the remainder
        a = b;        // Update a to the value of b
        b = hcf;      // Update b to the remainder
    }
    
    cout << "The HCF is: " << a << endl;  // The final value of a is the HCF
    return 0;
};
