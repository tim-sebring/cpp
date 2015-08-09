// Example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{

	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (count % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (count % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else {
			cout << count << endl;
		}
		count++;
	}
	return 0;
}

