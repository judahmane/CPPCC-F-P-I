#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
//1-5 //1-7
std::string funcreturn(std::string var)
{
	if (var == "5")
	{
		std::cout << "x = 5\n";
	}
	else
	{
		std::cout << "x doesn't = 5\n";
	}
	return var;
}

int absolute_value(int x)
{
	if (x == 0) std::cout << "0\n";
	else if (x >= 0) std::cout << "1\n";
	else if (x < 0) std::cout << "-1\n";
	return x;

}

int main() // entry point a function that executes when the user runs the program.
{
	printf("Hello, wolrd!\n"); //responsible for printing Hello, wolrd! to the console.

	int the_answer = 2;
	int lucky_number = the_answer / 6; //lucky_number now equals the answer.

	bool test = true; //create true/false variable
	if (test == true) //if that variable is true which is declared in the variable.
	{
		std::cout << "Test = True\n"; //then execute this statement
	}
	//listing 1-4 same as listing 1-3 with correct statements
	int x = -1;
	if (x > 0) printf("Positive.\n"); //if false check else if
	else if (x < 0) printf("Negative.\n"); //if false check else
	else printf("Zero\n"); //if true evaluate the function.
	std::string ErrorCode1 = funcreturn("5");

	int my_num = -10;
	printf("The Absolute value of %d is %d.\n", my_num, absolute_value(my_num));
	
	return 0;//exits running succesfully. 0 = Succesful Execute. Any others mean there is a problem.
	//determines how well a program ran
	//Exit Codes are always intergers!
	//IS OPTIONAL!
}
