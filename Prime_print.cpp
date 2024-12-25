#include <iostream>
using namespace std;

int main()
{
    cout << "Prime numbers between 1 and 100 are:" << endl;

    for (int i = 2; i <= 100; i++)  // Start from 2 since 1 is not a prime number
    {
         // Reset the flag for each number

        for (int j = 2; j <= i / 2; j++)  // Check divisors from 2 to i/2
        {
            if (i % j == 0)  // If divisible by any number other than 1 and itself
            {
                cout<<i<<" ";  // Not a prime number
                break;  // Exit the inner loop early
            }
        }
    }

    cout << endl;
    return 0;
}
