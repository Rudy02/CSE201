#include <iostream> 
#include <cmath> 
using namespace std;
int main(int argc, char * args[])
{
	double meters; 

	cout << "Enter meters = "; 
	cin >> meters;

	int feet = meters / 0.3048;
	int inches = (meters / 0.3048) * 12 - feet * 12 + .5;

	cout << feet << " ft " << inches << " in " << "\n.";

	cout << endl;

}
