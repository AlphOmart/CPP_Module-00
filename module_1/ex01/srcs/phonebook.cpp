#include "../header/classes.hpp"

typedef void (PhoneBook::*allcmd)();

int main(void)
{
	PhoneBook	directory;
	std::string	input;
	std::map<std::string, allcmd> command;

	command["ADD"] = &PhoneBook::add;
	command["SEARCH"] = &PhoneBook::search;

	directory.index = -1;
	directory.cont_nbr = 0;
	while (42)
	{
		std::cout << "\033[34mEnter a command : \033[0m";
		std::getline(std::cin, input);
		if (command.find(input) != command.end())
			(directory.*command[input])();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "\033[31m*please enter valid command*\033[0m" << std::endl;
	}
	return (0);
}
