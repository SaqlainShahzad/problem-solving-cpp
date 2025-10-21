#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<arr.size()<<endl;
    cout<<"Enter "<<n<<" Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n-1) {
            cout<<" ";
        } // Print each element with a space
    }
    cout << endl; // Add a newline after the loop
    return 0;
}
