#include <iostream>

using namespace std;

int main ()
{

    long n = 0;
    cout << "Enter an interget: " << endl;
    cin >> n;

    long sum = 1;
    for (int i = 1; i <= n; ++i) {
        sum = sum * i;
        }
    cout << "The factorial of " << n << " is "<< sum << endl;
}
