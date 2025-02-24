// Linear Search

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the element to search: ";
  cin >> target;

  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      cout << "Element found at index: " << i;
        }
    }
}