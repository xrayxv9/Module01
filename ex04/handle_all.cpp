#include "file.hpp"
#include <fstream>

std::string reading(char **av)
{
	std::fstream fs;
	std::string str;
	std::string tmp;
	std::string end(av[1]);
	std::string conc = ".replace";

	end += conc;
	fs.open(av[1], std::fstream::in);
	std::ofstream outfile(end.c_str());
	if (!fs.is_open() || !outfile.is_open())
	{
		std::cout << "One of the file couldn't opened" << std::endl;
		if (!fs.is_open())
			fs.close();
		if (!outfile.is_open())
			outfile.close();
		return (NULL);
	}
	while (1)
	{
		std::getline(fs, tmp);
		if (tmp.empty())
		{
			fs.close();
			outfile.close();
			return (str);
		}
		str = modify(tmp, av[2], av[3]);
		if (!str.empty())
			outfile << str << std::endl;
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
			i += len - 1;
			final += toReplace;
		}
		else
			final += file[i];
		i++;
	}
	return (final);
}
