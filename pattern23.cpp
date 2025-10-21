#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
           cout<< ((j==1 || j==i || j==9 ) ? "*": " ");
        }
        cout<<endl;
    }
}