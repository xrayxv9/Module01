#include "file.hpp"

int main (int argc, char **argv)
{
	std::fstream fs;

	if (argc != 4)
	{
		std::cout << "I would be thankfull if you'd give me all the arguments" << std::endl;
		return 0;
	}
	std::cout << reading(argv[1]);
}
