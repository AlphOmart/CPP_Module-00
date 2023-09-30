#include "../header/classes.hpp"

typedef void (PhoneBook::*allcmd)();

int main(void)
{
	PhoneBook	directory(-1, 0);
	std::string	input;
	std::map<std::string, allcmd> command;

	command["ADD"] = &PhoneBook::add;
	command["SEARCH"] = &PhoneBook::search;

	while (42)
	{
		std::cout << PROMPT;
		std::getline(std::cin, input);
		if (command.find(input) != command.end())
			(directory.*command[input])();
		else if (input == "EXIT")
			break ;
		else
			std::cout << NOT_VALID << std::endl;
	}
	return (0);
}
