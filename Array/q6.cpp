// Program to find the frequesncy of a number in an array

#include <iostream>
using namespace std;

int main() {
    int n, count = 0, element;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter the element: ";
    cin>>element;

    for (int i = 0; i < n; i++){
        if (arr[i]==element){
            count++;
        }
    }
    cout<<"Number "<<element<<" is repeated "<<count<<" times.";

}