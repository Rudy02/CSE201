// Lab 3, Ex:3: Factoring Numbers
#include <iostream>

using namespace std;
/*
Test Cases

  input    output
    2        2
    4        2 2
   23        23
   27        3 3 3
  100        2 2 5 5


*/
int main(int argc, char * args [])
{
    cout << "Enter a number greater than 1: " << endl;
    int n;
    cin >> n;

    int k =2;
    while (n >1) {
        if (n % k == 0) { // Ex: 100/2 = 50 "Twos" with no remainers
            cout << k << " ";// print out divisor(Whatever "k" is at the time)
            n = n/k;  // Take out "k" from "n" then assign a new "n"
        } else {
            ++k; // if "if" condition is false, increment "k", run while loop 
        }

    }


    cout << "\n";
}
