#include "file.hpp"

std::string reading(char **av)
{
	std::fstream fs;
	std::fstream fsReplace;
	std::string str;
	std::string tmp;
	std::string end(av[1]);
	std::string conc = ".replace";

	end += conc;
	fs.open(av[1], std::fstream::in);
	std::
	if (!fs.is_open() || !fsReplace.is_open())
	{
		std::cout << "One of the file couldn't opened" << std::endl;
		if (!fs.is_open())
			fs.close();
		if (!fsReplace.is_open())
			fsReplace.close();
		return (NULL);
	}
	while (1)
	{
		std::getline(fs, tmp);
		if (tmp.empty())
		{
			fs.close();
			fsReplace.close();
			return (str);
		}
		str = modify(tmp, av[2], av[3]);
		if (!str.empty())
		{
			std::cout << "it should work" << std::endl;
			fsReplace << str << std::endl;
		}
	}
}

std::string modify( std::string file, std::string search, std::string toReplace)
{
	int i = 0;
	std::string final;
	std::string tmp;
	int len = search.length();
	
	while (file[i])
	{
		tmp = file.substr(i, len);
		if (tmp == search)
		{
			i += len;
			final += toReplace;
		}
		else
			final += file[i];
		i++;
	}
	return (final);
}
