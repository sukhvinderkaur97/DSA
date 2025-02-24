//Program to find the largest number in an array

#include <iostream>
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

    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Largest number in the array is: "<<max<<endl;
}