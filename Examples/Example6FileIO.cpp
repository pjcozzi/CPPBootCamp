#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	// Question:  Where is file.txt written?
	// Question:  Why the are the two code blocks below in curly braces?

	{
		std::ofstream f("file.txt");

		if (f.is_open())
		{
			bool b = true;
			char c = 'a';
			int i = 2;
			std::string s = "abc xyz";

			f << b << ' ' << c << ' ' << i << ' ' << std::endl
			  << s << std::endl;
		}
		else
		{
			std::cerr << "Could not open example.txt for writing." << std::endl;
		}
	}

	// Question:  What are the contents of file.txt?

	{
		std::ifstream f("file.txt");

		if (f.is_open())
		{
			bool b;
			char c;
			int i;
			std::string s;
			std::string s2;

			// Question:  Why is "abc xyz" read into two strings?
			f >> b >> c >> i >> s >> s2;

			std::cout << b << std::endl;
			std::cout << c << std::endl;
			std::cout << i << std::endl;
			std::cout << s << ' ' << s2 << std::endl;
		}
		else
		{
			std::cerr << "Could not open example.txt for reading." << std::endl;
		}
	}

	return 0;
}

