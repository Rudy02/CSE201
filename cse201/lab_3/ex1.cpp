#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number greater than 1: " << endl;
    int n;
    cin >> n;
    bool foundDivisorForN = false;

    // Look for a divisor
    // If we find a divisor, then set foundDivisorForN to true.
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) foundDivisorForN = true;
    }
    if (foundDivisorForN == true) {
        cout << n << " is not prime.\n";
        }else {
            cout << n << " is prime.\n";
    }

} 
