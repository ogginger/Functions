//bCheckForFile.h: Check if a file exists. 
/* Design- */
#ifndef BCHECKFORFILE_H
#define BCHECKFORFILE_H

//libs...
#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

bool bCheckForFile( string sNameInput ) {
	bool bFile = false;

	ifstream xFile;

	xFile.open( sNameInput );

	if ( xFile.is_open() ) {
		bFile = true;
	}
	
	return bFile;
}

#endif
