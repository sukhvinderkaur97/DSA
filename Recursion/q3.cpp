/*
You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps.
In how many distinct ways can you climb to the top?
INPUT: n = 2
OUTPUT: 2
INPUT: n = 3
OUTPUT: 3
*/

#include <iostream>
using namespace std;

int stairs(int n)
{
    if (n <= 2)
        return n;
    return stairs(n - 1) + stairs(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb " << n << " stairs: " << stairs(n) << endl;
    return 0;
}
