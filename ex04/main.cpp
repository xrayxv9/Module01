#include "file.hpp"

int main (int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "I would be thankfull if you'd give me all the arguments" << std::endl;
		return 0;
	}
	reading(argv);
}
