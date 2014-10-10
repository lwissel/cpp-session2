#include <iostream>
using namespace std;

double f2c(double f) {
	return (f-32)*(5./9);
}

int main() {
	cout << "F C" << endl;
	for(int f=0; f<200; f+=20) {
		cout << f << " " << f2c(f) << endl;
	}
}