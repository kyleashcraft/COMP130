#ifndef WORDLIST_H
#define WORDLIST_H

#include <string>
#include "stdafx.h"

struct Word {
	std::string phrase;
	int count;
	Word *rlink = nullptr;
};

class WordListGenerator {
public: 
	WordListGenerator(std::string p_inputFile);
	void getWordFile();
private:
	Word *first;
	Word *moving;
	std::string paragraph;
	std::string inputFile;
};

#endif