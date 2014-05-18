//bCheckString_forString_tests.h: Unit testing for bCheckstring_forString.h 
/*TDD-
1. Scenario.
	bCheckString_forString( "abc", "abc" ); returns true. 

2. Prototype.
	void bCheckString_forString_abc_abc_returnsTrue();
3. Psuedocode.
	Arrange- 
		bool bResult = false;
	Act-
		bResult = bCheckString_forString( "abc", "abc" );
	Assert-
		assert( bResult == true );
4. Pass tests.
5. Git update.
*/

#ifndef BCHECKSTRING_FORSTRING_TESTS_H
#define BCHECKSTRING_FORSTRING_TESTS_H

//libs...
#include <string>
#include <cassert>

//Method under test.
#include "../src/bCheckString_forString.h"

//etc...
#include "../etc/print.h"

class bCheckString_forString_tests {
public: 
	bCheckString_forString_tests() {
		print("Testing...");
		run();
	}

	~bCheckString_forString_tests() {
		print("Testing complete. All tests passed!");
	}

	void bCheckString_forString_abc_abc_returnsTrue() {
		bool bResult = false;

		bResult = bCheckString_forString( "abc", "abc" );

		assert( bResult == true );
	}

	void bCheckString_forString_abc_Empty_returnsFalse() {
		bool bResult = true;

		bResult = bCheckString_forString( "abc", "" );

		assert( bResult == false );
	}

	void bCheckString_forString_Empty_abc_returnsFalse() {
		bool bResult = true;

		bResult = bCheckString_forString( "", "abc" );

		assert( bResult = false );
	}

	void run() {
		bCheckString_forString_abc_abc_returnsTrue(); 
		bCheckString_forString_abc_Empty_returnsFalse();
	}
	
};

#endif
