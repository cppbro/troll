#include <iostream>



int main()
{
	std::cout << "Enter y/n if u want me to print Hello World!" << '\n';
	char poo;
	std::cin >> poo;

	if (poo == 'y')
	{
		char* change = &poo;
		*change = 'n';
		std::cout << "you didnt want me to say hello world! :((" << '\n' ;
		return 0;

	}
	if (poo == 'n')
	{
		char* change = &poo;
		*change = 'y';
		std::cout << "Hello World!";
		return 0;
	}

}



// if u see this, all these programs will be pure c++ YEE HAW! until assembly comes around ;((
