#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;

// the follow is a function of print a string:"Hello word" by using different way.
void PrintHello(void)
{
	// manner one:
	// Using the standardized input or output stream, which is provided by standardized library of C++
	// Using this way, you must include the head file called iostream.h at top of the source file
	// and the "using namespce std" is a alternative, if you are not edit like me, you can use the format:
	// std::cout<<something you want to output to screen
	cout << "Hello world" << endl;
	// A string is must be cover in ""
	// manner two:
	// print what you want to output in a way of using the printf function of C library
	// before you start to use this function, you must include head file: stdio.h
	printf("Hello world\n");
	char s[] = "Hello world";
	printf("%s", s);
}