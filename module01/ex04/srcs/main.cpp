#include "replace.hpp"

int	ft_exit(std::string str, int ret)
{
	if (!str.empty())
		std::cout << str << std::endl;
	return (ret);
}

char*	get_buffer(std::ifstream& infile)
{
	infile.seekg(0, infile.end);
	int size = infile.tellg();
	infile.seekg(0, infile.beg);
	char* buffer = new char [size];
	infile.read (buffer, size);
	return (buffer);
}

std::string replace(std::string buffer, std::string s1, std::string s2)
{
	size_t index = 0;
	while (index != std::string::npos)
	{
		index = buffer.find(s1, index);
		if (index == std::string::npos)
			break;
		else
		{
			buffer.erase(index, s1.size());
			buffer.insert(index, s2);
			index += s2.size();
		}
		std::cout << buffer <<std::endl;
	}
	return (buffer);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (ft_exit("Error : wrong number of arguments", -1));
	}
	else
	{
		std::ifstream infile(argv[1]);
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty() || s2.empty() || !infile)
		{
			infile.close();
			return (ft_exit("Error : argument.s not valid", -1));
		}
		else
		{
			char* buffer = get_buffer(infile);
			std::string buf = replace(buffer, s1, s2);
			delete [] buffer;
			std::ofstream outfile("outfile.replace");
			outfile << buf;
		}
		infile.close();
	}
	return (0);
}
