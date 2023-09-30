#include <iostream>
#include <string>

static void	upscale(char *str)
{
	for (int j = 0; str[j] != '\0'; j++)
		std::cout << (char)toupper(str[j]);
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
