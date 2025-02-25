/*
A party has been organised on cruise. The party is organised for a limited time(T). 
The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. 
The task is to find the maximum number of guests present on the cruise at any given instance within T hours.
Example:
Input :
5  (Value of T)
[7,0,5,1,3]  (E[], Element of E[0] to E[N-1], where input each element is separated by new line.)
[1,2,1,3,4]  (L[], Element of L[0] to L[N-1], while input each element is separate by new line.)
Output :
8  (Maximum number of guests on cruise at an instance.)
*/
#include <iostream>
using namespace std;

int main(){
    int T;
    cout << "Enter the number of hours: ";
    cin >> T;

    int arr1[T];
    cout << "Enter the people entering: ";
    for ( int i = 0; i < T; i++) {
        cin >> arr1[i];
    }
    
    int arr2[T];
    cout << "Enter the people leaving: ";
    for ( int i = 0; i < T; i++) {
        cin >> arr2[i];
    }

    int currentpeople = 0, maxpeople = 0;
    for ( int i = 0; i < T; i++) {
        currentpeople += arr1[i] - arr2[i];
        if (currentpeople > maxpeople) {
            maxpeople = currentpeople;
        }
    }

    cout << "Maximum number of people on Cruise: " << maxpeople << endl;
    return 0;
}