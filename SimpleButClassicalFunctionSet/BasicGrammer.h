#pragma once
#include <iostream>
using namespace std;

// the follow is a function of print a string:"Hello word" by using different way.
void PrintHello(void)
{
	// manner one:
	// Using the standardized input or output stream, which is provided by standardized library of C++
	// Using this way, you must include the head file called iostream at top of the source file
	// and the "using namespce std" is a alternative, if you are not edit like me, you can use the format:
	// std::cout<<something you want to output to screen
	cout << "Hello world" << endl;
	// A string is must be cover in ""
}