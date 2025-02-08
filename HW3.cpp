//HW3.cpp-CS1210 third homework program
//Caleb Doese
//9-8-21

#include <iostream>
using namespace std;
#include <cmath>
int main() {
	float coefficient1;
	float coefficient2;
	float coefficient3;
	
	cout << "Enter 3 coefficients of a quadratic equation." << endl;
	cin >> coefficient1;
	cin >> coefficient2;
	cin >> coefficient3;
	
	float x = coefficient2 * coefficient2 - 4.0 * coefficient1 * coefficient3;
	if (x < 0.0) {
	cout << "No Real Roots" << endl;
	} else {
	float discriminant = sqrt(x);
	float root1 = (-1.0 * coefficient2 + discriminant) / (2.0 * coefficient1);
	float root2 = (-1.0 * coefficient2 - discriminant) / (2.0 * coefficient1);
	
	cout << "The real roots of the quadratic equation are at x = " << root1 << " and x = " << root2 << endl; 
	}




return 0;
}




