#include <iostream>

int main(void)
{
	std::string	str =  "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "=============================="<< std::endl;

	std::cout << "string 주소: " << &str << std::endl;
	std::cout << "stringPTR 주소: " << &stringPTR << std::endl;
	std::cout << "stringREF 주소: " << &stringREF << std::endl;

	std::cout << "=============================="<< std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}