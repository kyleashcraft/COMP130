//Kyle Ashcraft
//5/2/18
//Compiler: MS Visual Studio 2017 Community Edition
//Purpose: Library to read word count
// and create output text file of
// word counts

#include "stdafx.h" //uses precompiled header


int main()
{
	WordListGenerator test("GDP.txt");
	test.getWordFile();

    return 0;
}

