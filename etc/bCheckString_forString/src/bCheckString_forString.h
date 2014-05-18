/*bCheckString_forString.h: return true if a string contains the given substring.*/ 

#ifndef BCHECKSTRING_FORSTRING_H
#define BCHECKSTRING_FORSTRING_H

//libs...
#include <string.h>

//etc...

using namespace std;

bool bCheckString_forString( string sInput1, string sInput2 ) {
	bool bResult = false;

	if ( sInput2 == "" ) {
		bResult = false;
	} else if ( sInput1.find( sInput2 ) >= 0 ) {
		bResult = true;
	}
	
	return bResult;
}

#endif

