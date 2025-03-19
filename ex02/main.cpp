#include <iostream>

int main ()
{
	std::string original= "HI THIS IS BRAIN";
	std::string *ptr = &original;
	std::string &ref = original;

	std::cout << "Here is the original adress : " << &original << std::endl;
	std::cout << "Here is the pointer to the origianl: " << ptr << std::endl;
	std::cout << "Here is the reference to the original : " << &ref << std::endl << std::endl << std::endl;


	std::cout << "Here is the content of the original : " << original << std::endl;
	std::cout << "Here is the content of the pointer : " << *ptr << std::endl;
	std::cout << "Here is the content of the reference : " << ref << std::endl;

}
