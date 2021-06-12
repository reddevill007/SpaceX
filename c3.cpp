// C++ program to show passing
// of objects to a function

#include <bits/stdc++.h>
using namespace std;

class Example {
public:
	int a;

	// This function will take
	// an object as an argument
	void add(Example E)
	{
		a = a + E.a;
	}
};

// Driver Code
int main()
{

	// Create objects
	Example E1, E2;

	// Values are initialized for both objects
	E1.a = 50;
	E2.a = 100;

	cout << "Initial Values \n";
	cout << "Value of object 1: " << E1.a
		<< "\n& object 2: " << E2.a
		<< "\n\n";

	// Passing object as an argument
	// to function add()
	E2.add(E1);

	// Changed values after passing
	// object as argument
	cout << "New values \n";
	cout << "Value of object 1: " << E1.a
		<< "\n& object 2: " << E2.a
		<< "\n\n";

	return 0;
}
