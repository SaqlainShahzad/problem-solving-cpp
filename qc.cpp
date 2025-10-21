#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {6, 10, 7, 12, 8};
int n = sizeof(arr) / sizeof(arr[0]);

quickSort(arr, 0, n - 1);  // Sorting the entire array

// After sorting, the array will be: {6, 7, 8, 10, 12}

}