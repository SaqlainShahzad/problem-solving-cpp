#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter Elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"You Entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    int n = arr[0];
    for(int i =0; i < 5; i++){
        if (arr[i]>n)
        {
            n=arr[i];
        }
    }
    cout<<"The highest element is: "<<n<<endl;
    return 0;
}
