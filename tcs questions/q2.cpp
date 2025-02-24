/* 
Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
Note : 1st element of the array should be considered in the count of the result.
For example,
Arr[]={7,4,8,2,9}
As 7 is the first element, it will consider in the result.
8 and 9 are also the elements that are greater than all of its previous elements.
Since total of  3 elements is present in the array that meets the condition.
Hence the output = 3.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int count = 1;
    int tillmax = arr[0];

    for (int i = 1; i < n; i++) {
        if (tillmax < arr[i]) {
            count++;
            tillmax = arr[i];
        }
    }

    cout<<"No of elements greater than it's prior elements are: "<<count<<endl;
    return 0;
}
