#include <iostream>
#include <cmath>
using namespace std;


// We want to solve a quadratic equation.
int main() {
	int p;
	int q;
	cout << "Enter p: ";
	cin >> p;
	cout << "Enter q: ";
	cin >> q;
	int x1 = (-p + sqrt((p * p) - (4 * q))) / 2;
	int x2 = (-p - sqrt((p * p) - (4 * q))) / 2;
	cout << "The result is:\n" << "x1: " << x1 << "\nx2: " << x2 << "\n";
	return 0;
}	
