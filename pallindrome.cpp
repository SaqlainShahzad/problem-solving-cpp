    #include<iostream>
    using namespace std;
    int main() {
        int n,r,temp,sum=0;
        cout<<"Enter a number: ";
        cin>>n;
        temp=n; // is me n ki original value store ki hai.... q k n ki value loop me change ho rahi hai. (means 0 ho rahi hai)
        while (n>0) {
            r=n%10;
            sum=sum*10+r;
            n=n/10; 
        }
        if (sum == temp) {
            cout<<sum<<" is pallindrome.";
        } else {
            cout<<sum<< " is not pallindrome.";
        }
        
    }