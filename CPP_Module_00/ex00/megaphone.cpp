#include <iostream>

#define NO_ARG "* Loud and unbearable feedback noise *"

void	print_ucase(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
			std::cout << static_cast<char> (std::toupper(*it));
}

int main(int argc, char **argv) {
	if (argc == 1)
		print_ucase(NO_ARG);
	for (int i = 1; i < argc; i++)
	{
		std::string str(argv[i]);
		print_ucase(str);
	}
	std::cout << '\n';
	return (0);
}