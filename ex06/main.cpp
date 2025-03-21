#include "Harl.hpp"
#include <cstdlib>

int getSwitched( std::string str )
{
	std::string strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;
	Harl harl = Harl();

	for (int x = 0; x < 4; x++)
	{
		if (strs[x] == str)
		{
			i = x;
			break ;
		}
	}
	switch (i)
	{
		case 0 :
			harl.printThemAll(0);
			return 1;
		case 1 :
			harl.printThemAll(1);
			return 1;
		case 2 :
			harl.printThemAll(2);
			return 1;
		case 3 :
			harl.printThemAll(3);
			return 1;
		default:
			std::cout << "Only DEBUG, INFO, WARNING and ERROR are accepted" << std::endl;
			return 0;
	}
}

int main ( int argc, char **argv)
{
	if (argc < 2 || argc >= 3)
	{
		std::cout << "I only accept 1 argument" << std::endl;
		return 1;
	}
	else
		getSwitched(std::string(argv[1]));
}
