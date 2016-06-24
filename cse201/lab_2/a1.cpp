#include <iostream>
#include <cmath> 

using namespace std;

int main (int argc, char * args[])
{ 
/* 						 // Problem 1 and 2
	int i = 0; 
	while (i<7)
  {
	cout << 2 * i;
	++i;
	cout << "\n";
  }
*/

/*  						// Problem 3
	int k = 100;
	for (int i = 0; i < k; ++i)
{
	cout << i;
	cout << "\n"; 
}
*/
/* 						 // Problem for Queation 4
	int i = 11;
	while (i <=99)
  {
	i = i + 3;
  }
	cout << i;
	cout << "\n";
*/
/*						// Problem Number 5
	cout << 1/2 << ", " << 1/2.0;
	cout << "\n"; 
*/

/* 						 // Problem Number 7  
  int sum = 0;
  int n;
   cout << "Enter a number" << "\n";
   cin >> n;

    for (int i = 0; i <= n; ++i)
     {
	sum = sum + i;
     }
   cout << sum << "\n";
*/	
/*  // Problem Number 8
  int i = 330;
	while (i <= 550)
  {
	cout << i << "\n";
	i++;
  }
*/
/* 						 // Problem Number 9
  int i = 0;
  cout << "Enter number between 3 and 12" << "\n";
  cin >> i;
    if ((i >= 3) && (i <= 12))
  {
	cout << "Good Number" << "\n";
  } 
    else{
	cout << "Bad Number" << "\n";
  }
*/ 

 long sum = 0;
 long n;
	cout << "Enter a number greater than 100: " << "\n";
	cin >> n; 

for ( long i = 100; i < n; ++i)
{
  sum += i;
}
 cout << sum << "\n";
}

