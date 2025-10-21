#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int s=sqrt(n);
    if(s*s==n){
        cout<<n<<" is perfect square";
    } else {
        cout<<n<<" is not perfect square";
    }
}