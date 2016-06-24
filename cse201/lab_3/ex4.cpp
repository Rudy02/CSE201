// Lab 3, Ex:4: Generating Random Colors
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char * args[])
{
    srand(time(0));
    for (int i = 0; i < 100; ++i) { // Loops to generate 100 Colors
        for (int j = 0; j < 6; ++j) { //Loops to generate 6 chars per line
            int n = rand() % 16; // mod 16 for hexadecimal, 16 characters.
            if (n < 10) {        // including 0.. So 0 - 15.
                cout << n; // if "n" < 10, print number,go to inner loop.
            } else if (n == 10) {
                cout << "A";
            } else if (n == 11) {
                cout << "B";
            } else if (n == 12) {
                cout << "C";     // if "n" > 10, it picks a letter, then goes
            } else if (n == 13) {// to  outer loop, inner loop until.
                cout << "D";     // 6 chars are generated, then outer loop.
            } else if (n == 14) {
                cout << "E";
            } else if (n == 15) {
                cout << "F";
            } else {
                cout << "Something's wrong.";// if n = 16, error. 
            }
        }
        cout << "\n";// print a new line and exit inner loop
    }// exit outer loop
}
