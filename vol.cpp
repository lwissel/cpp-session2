#include <iostream>
#include <math.h>

using namespace std;

double volcyl(double radius, double height) {
	return (pow(radius,2)*M_PI * height);
}

int main() {
	double r = 10;
	double h = 20;
	
	cout << r << ", " << h << endl;
	cout << volcyl(r,h);
}