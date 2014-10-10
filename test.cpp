#include <iostream>
#include <vector>
using namespace std;

vector<int> properDivisor(int n) {
	vector<int> a(1,1);

	// start loop at 2 because 1 is already included
	for (int i=2;i<=n;i++) {
		int b = n%i;
		if (b == 0 ) {
			a.push_back(i);
		}
	}
	return a;
}

int vecSum(vector<int> vec) {
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum;
}

int main() {
	
	vector<int> a;
	a = properDivisor(10);
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << endl;
	}
	cout << vecSum(a) << endl;
	return 0;
}