#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter numbers:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=length-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}