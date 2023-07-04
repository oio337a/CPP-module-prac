#include <fstream>
#include <iostream>

int main(int ac, char *av[])
{
	std::ifstream filename;
	std::string	s1;
	std::string	s2;
	std::ofstream outname;
	std::string out;
	std::string	str;

	if (ac != 4)
	{
		std::cout << " we need 3 arg " << std::endl;
		return 1;
	}
	
	s1 = av[2];
	s2 = av[3];
	int s1_len = s1.length();
	int s2_len = s2.length();

	if (!s1_len || !s2_len)
	{
		std::cout << " s1, s2 길이는 1이상이여야합니다. " << std::endl;
		return 1;
	}
	filename.open(av[1]);
	if (filename.fail())
	{
		std::cout << " can't read infile " << std::endl;
		return 1;
	}
	out = av[1];
	out.append(".replace");
	outname.open(out.c_str());
	if (outname.fail())
	{
		std::cout << " can't read outfile " << std::endl;
		return 1;
	}
	while (1)
	{
		std::getline(filename, str);
		size_t	s1_idx = 0;
		while (1)
		{
			s1_idx = str.find(s1, s1_idx);
			if (s1_idx == std::string::npos)
				break ;
			str.erase(s1_idx, s1_len);
			str.insert(s1_idx, s2);
			s1_idx += s2_len;
		}
		outname << str;
		if (filename.eof())
			break ;
		outname << std::endl;
	}
	filename.close();
	outname.close();

	return 0;
}
