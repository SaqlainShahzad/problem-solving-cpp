#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){              //for (j = 1; j <= i; j++) // ye condition hum ne loop me hi de di he.
            if(j<=i){
                cout<<"*";
            } else {
                cout<<"";
            }
        }
        cout<<endl;
    }
    return 0;
}