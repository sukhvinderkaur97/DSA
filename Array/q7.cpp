// Program to find the count of palindrome numbers in an array

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    cout << "Count of palindrome numbers: " << count << endl;
    return 0;
}
