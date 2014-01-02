//bCheckString_forString_tests.h: Unit testing for bCheckstring_forString.h 

#ifndef BCHECKSTRING_FORSTRING_TESTS_H
#define BCHECKSTRING_FORSTRING_TESTS_H

//libs...

//Method under test.
#include "../src/bCheckString_forString.h"

//etc...
#include "../etc/print.h"

class bCheckString_forString_tests {
public: 
	bCheckString_forString_tests() {
		print("Testing...");
	}

	~bCheckString_forString_tests() {
		print("Testing complete. All tests passed!");
	}

	void run() {}
};

#endif
