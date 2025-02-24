// Program to smallest number in an array

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);
        cout<<"Smallest number in the array is: "<<arr[0]<<endl;

    // int min = arr[0];
    // for (int i = 1; i < n; i++){
    //     if (min > arr[i]){
    //         min = arr[i];
    //     }
    // }
    // cout<<"Smallest number in the array is: "<<min<<endl;

}