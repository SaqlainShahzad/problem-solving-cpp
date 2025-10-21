#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr={1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n=0;
    for(int i=0;i<=len;i++){
        n=n+arr[i];
    }
    cout<<"sum of all elements is "<<n;
    return 0;
}