#include "../header/utils.hpp"

int main(void)
{
	PhoneBook	directory(-1, 0);
	std::string	input;

	while (42)
	{
		std::cout << PROMPT;
		std::getline(std::cin, input);
		if (!std::cin)
		{
			std::cout << RED"\ninput was close !\nExiting..."WHITE << std::endl;
			exit(0);
		}
		if (input == "ADD")
			directory.add();
		else if (input == "SEARCH")
			directory.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << NOT_VALID << std::endl;
	}
	return (0);
}