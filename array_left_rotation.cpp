#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int d=2,n=5;
    for(int i=0;i<d;i++){
        int first=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}