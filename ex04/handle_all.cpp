#include "file.hpp"

std::string reading(char *file)
{
	std::fstream fs;
	std::string str;
	std::string tmp;

	fs.open(file, std::fstream::in | std::fstream::out);
	if (!fs.is_open())
	{
		std::cout << "The file couldn't be opened" << std::endl;
		return (NULL);
	}
	while (1)
	{
		std::getline(fs, tmp);
		if (tmp.empty())
		{
			fs.close();
			return (str);
		}
		str += " ";
		str += tmp;
	}
}
