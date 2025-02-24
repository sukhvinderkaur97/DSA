// Program to reverse a given array

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
