#include <iostream>
using namespace std;

int main() {
    int i, j,n;
    cout<<"Enter no:";
    cin>>n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n+1 - i; j++) {
            cout << "*";  // Print stars
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}
