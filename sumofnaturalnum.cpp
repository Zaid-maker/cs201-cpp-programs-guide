#include <iostream>
using namespace std;

int main()
{
    // Initialize variable
    int n, sum = 0;

    // Prompt user to enter a natural number
    cout << "Enter a positive integer: ";
    cin >> n;

    // run the for loop
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    // Display the sum
    cout << "The sum of natural numbers from 1 to " << n << " is " << sum << endl;

    return 0;
}