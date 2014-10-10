#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int throwdie() {
	return 1+rand()%12;
}

int main() {
	vector<int> ntimes(13,0);
	
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		ntimes[throwdie()]++;
	}

	cout << "Spots Times" << endl;
	for(int j=1; j<=12; j++) {
		cout << j << ": " << ntimes[j] << string(ntimes[j], '*') << endl;
	}
	return 0;
}