
#include "pch.h"

int main(int argc, char *argv[])
{
	counter *myCounter = new counter;
	myCounter->initInFilename(argv[1]);
	//char tempName[] = "input.txt";
	//myCounter->initInFilename(tempName);
	
	/*  
	method one
	myCounter->countCharLine();
	myCounter->countWord();
	*/

	//method two
	myCounter->countAll();

	myCounter->frequency();

	char outFilename[] = "result.txt";
	myCounter->print(outFilename);

	delete myCounter;

	return 0;
}

