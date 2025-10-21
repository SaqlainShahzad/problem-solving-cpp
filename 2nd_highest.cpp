#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //sort(arr.begin(), arr.end());
    int highest=arr[0], secondHighest=0;
    for(int i=0; i<n; i++){
        if(arr[i]>highest){
            highest=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>secondHighest && arr[i]!=highest){
            secondHighest=arr[i];
        }
    }
    cout<<secondHighest;
    
return 0;
}