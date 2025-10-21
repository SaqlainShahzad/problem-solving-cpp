// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            if(j>=6-i && j+4>=i){             // chahe to me j+4>=i ko j>i-4 bhi likh sakta hu
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}