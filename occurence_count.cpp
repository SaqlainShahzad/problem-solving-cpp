#include <iostream>
using namespace std;

int main() {
    int arr[6]={1,2,3,2,4,2};
    int target, occurence=0;
    cout<<"Enter target:";
    cin>>target;
    for(int i=0;i<6;i++){
        if(arr[i]==target){
            occurence++;
        }
    }
    cout<<occurence;
    return 0;
}
