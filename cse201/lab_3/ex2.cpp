// Lab 3, Ex:2: Listing Prime Numbers
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number greater than 1: " << endl;
    int k;
    cin >> k;
    bool foundDivisorForN = false; // Boolean Data type

    for (int n = 2; n <= k; ++n) {  // Outer Loop: Searches for Prime Numbers
        bool foundDivisorForN = false;

        for (int i = 2; i<n; ++i) {  // Inner Loop: Finds Prime Number
            if (n % i == 0) foundDivisorForN = true;
        }

       // if (foundDivisorForN == false) {  //If Prime Num. is found, Print Out
        if (!foundDivisorForN) {
            cout << n << " ";
        }
    } // Loops back to the Outer Loop

    cout << "\n";
}
