// Program to implement binary search

#include<iostream>
using namespace std;

int binarysearch(int arr[], int start, int end, int target){
    int mid;
    while(start<=end){
        mid = start + (end - start) / 2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    cout<<"Element found at index: "<<binarysearch(arr, 0, n-1, target);
}