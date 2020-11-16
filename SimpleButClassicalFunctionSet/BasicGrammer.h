#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
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
// the follow function is demoncrate how to use keyboard to inout data
void InputAndOutput(void)
{
	// Inputing data to a variable has three manner
	// one is using static assignment when declare a varable
	// second is using standardized inputstream get data from input device such as keyboard
	// three is using scanf function to get data from screen
	// the different between the second and three is the former provided by standardized library of C++
	// and the last supported by C library
	int varOne = 12;	// the data type you can modify to what you want, just remember in vaild way
	int varTwo;
	cin >> varTwo;
	int varThree;
	scanf_s("%d", &varThree);
	// the symbol "&" is a operated symbol used to get the address of inner memory of the parameter
}
// the follow is simple encrypt function used to translate the meaning string to cryptograph
void SimpleEncrypt(void)
{
	int result = 1;
	int i;
	char text[128] = { '\0' };
	char cryptograph[128] = { '\0' };
	while (true)
	{
		if (result == 1)
		{
			printf("please input the string you want to encrypt:\n");
			scanf("%s", &text);
			int count = strlen(text); // strlen() is a function of string.h used to get the length of parameter
			for (int i = 0; i < count; i++)
			{
				cryptograph[i] = text[i] + i + 5;
			}
			cryptograph[count] = '\0';
			cout << "after encrypting:" << cryptograph << endl;
		}
		else if (result == 2)
		{
			int count = strlen(text);
			for (int i = 0; i < count; i++)
			{
				text[i] = cryptograph[i] - i - 5;
			}
			text[count] = '\0';
			cout << "meaning string:" << text << endl;
		}
		else if (result == 3)
		{
			break;
		}
		cout << "key word:1, encrypting meaning string" << endl
			<< "key word:2 unencrypting cryptograph above" << endl
			<< "key word:3, exit the program" << endl;
		cin >> result;
	}
}