#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int length1 = s1.length();
    int length2 = s2.length();
    if(length1==length2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"both are anagram"<<endl;
        } else{
            cout<<"both are not anagram"<<endl;
        }
    } else{
        cout<<"both are not"<<endl;
    }
}