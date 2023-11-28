#include <iostream>
#include <string>

static void	upscale(const std::string str)
{
	for (std::string::const_iterator it = str.begin();
		 it != str.end();
		 ++it)
		std::cout << (char) toupper(*it);
}

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			upscale(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
}
