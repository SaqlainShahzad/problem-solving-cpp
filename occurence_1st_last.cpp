#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[9]={1,8,3,4,5,5,5,7,3};
    int target=5;
    int len=sizeof(arr)/sizeof(arr[0]);
    int first=-1,last=-1;
    sort(arr, arr+len);
    for(int i=0;i<len;i++){
        if(arr[i]==target){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    if(first == -1) {
        cout << "Not found";
    } else {
        cout << "First position: " << first << "\n";
        cout << "Last position: " << last << "\n";
    }
    return 0;
}
