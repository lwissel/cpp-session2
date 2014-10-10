//
// Some definitions (all relating to integers):
//
// A proper divisor of an integer (n) is a number less than n
// which divides evenly into n (eg 1, 2, 5 are proper divisors of 10)
//
// A perfect number is a number which is equal to the sum of 
// its proper divisors
//
// An amicable number (n) is a number whose sum of divisors is equal
// to a different number (m), but the sum of divisors of m is equal
// to the original number n.  m and n are said to form an amicable pair.
//

//
// Complete the code below by writing prototypes and function 
// code for the two functions: properDivisors (returns a vector
// with the proper divisors of a given number) and sumVector
// (returns the sum of the elements of a vector).  The start
// of the main function provides a test harness for these
// functions - you should check first that your functions
// give a reasonable answer to these tests.
// Then, using your new functions, complete the main routine to
// find all perfect numbers below 10000, and the sum of all
// the amicable numbers below 10000. 
//

#include <iostream>
#include <vector>

using namespace std;

// get proper divisors
vector<int> properDivisor(int n);

// sum up vector elements
int vecSum(vector<int> vec);

// test whether a number is a perfect number
bool isPerfectNumber(int n);

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////


int main( ) {

   // Test harness for divisors and vecSum functions
   int num1 = 10;
   int num2 = 60;
   std::vector<int> div;
   div = properDivisor( num1 );
   cout << "The proper divisors of " << num1 << " are ";
   for ( int i = 0 ; i < div.size() ; ++i )
   {
     cout << div[i] << " ";
   } 
   cout << endl << " ...and their sum is " 
        << vecSum(div) << endl;
   div = properDivisor( num2 );
   cout << "The proper divisors of " << num2 << " are ";
   for ( int i = 0 ; i < div.size() ; ++i )
   {
     cout << div[i] << " ";
   } 
   cout << endl << " ...and their sum is " 
        << vecSum(div) << endl;
	
	// Find perfect numbers
   cout << endl << "Perfect Numbers: ";
   for (int i = 2; i <= 10000; ++i) {
		if (isPerfectNumber(i)) {
			cout << i << " ";
		}
   }

   cout << endl;
   cout << "Sum of Amicable Numbers: ";
   // FIND SUM OF AMICABLE NUMBERS
   int sumAM = 0;
   for (int i = 2; i <= 10000; ++i) {
	if (isPerfectNumber(i) != true) {
		int m = vecSum(properDivisor(i));
		if (vecSum(properDivisor(m)) == i) {
			sumAM += i;
		}
	}
   }
   cout << sumAM;

   cout << endl;
}


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
// Test for proper Divisors.
vector<int> properDivisor(int n) {
	vector<int> a(1,1);

	// start loop at 2 because 1 is already included
	for (int i=2;i<n;i++) {
		int b = n%i;
		if (b == 0 ) {
			a.push_back(i);
		}
	}
	return a;
}

// Prototype for vector sum (vecSum) function
int vecSum(vector<int> vec) {
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum;
}

bool isPerfectNumber(int n) {
	vector<int> div = properDivisor(n);
	
	if(n == vecSum(div)) {
		return true;
	}
	else {
		return false;
	}
}
