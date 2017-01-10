#include "FizzFuzz.h"
#include "ofUtils.h"


void FizzFuzz::loadFF()
{
	for (int i = 1; i < 101; i++) {
		if (i %3 ==0 && i % 5 ==0)
			cout << "FizzFuzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if(i % 5 == 0)
			cout << "Fuzz" << endl;
		else cout <<i<< endl;
	}
}
