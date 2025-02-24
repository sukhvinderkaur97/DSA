// Program to find the factorial of a number using recusrion

#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout << "Factorial of " << n << " is "<< factorial(n) << endl;
    return 0;
}