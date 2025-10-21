#include <iostream>
using namespace std;

int main() {
    int a, b, hcf, lcm;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    int num1 = a, num2 = b; // Store original values

    // Calculate HCF using the Euclidean algorithm
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    hcf = a; // The last non-zero value of 'a' is the HCF

    // Calculate LCM using the formula
    lcm = (num1 * num2) / hcf;

    // Output both HCF and LCM
    cout << "The HCF is: " << hcf << endl;
    cout << "The LCM is: " << lcm << endl;

    return 0;
}
