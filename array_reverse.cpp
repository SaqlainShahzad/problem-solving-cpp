// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter no:";
    cin>>n;
    int A[n];
    for(int i =0; i<n;i++){
        cin>>A[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}