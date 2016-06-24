#include <iostream>
#include <cassert>

using namespace std;

bool isPrime(int n)
{
    assert (n > 1);
    bool foundDivisorForN = false;

    // Look for a divisor
    // If we fins a divisor, then set foundDivisorForN to true
    for (int i =2; i<n; ++i) {
        if (n % i == 0) foundDivisorForN = true;
    }
    return foundDivisorForN;
}

int main(int argc, char * args[])
{
    cout << "Enter an interger greater than 1: ";
    int n;
    cin >> n;

    bool foundDivisorForN = isPrime(n);

    if (foundDivisorForN) {
       cout << n << " is not prime.\n";
    } else {
        cout << n << " is prime.\n";
    }
}
