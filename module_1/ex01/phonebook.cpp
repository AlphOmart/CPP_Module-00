#include "classes.hpp"
#include <iomanip>
#include <map>

std::string	print_trunc(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 8) + ".");
}

void	PhoneBook::search()
{
	if (cont_nbr == 0)
		std::cout << "\033[31m" << "the directory is empty" << "\033[0m" << std::endl;
	else
	{
		std::cout << "\033[32m" << "| id|  1st_name| last_name|  nickname|" << "\033[0m" << std::endl;
		for (int i = 0; i < cont_nbr; i++)
		{
			std::cout << "|  " << i + 1 << "|";
			for (int j = 0; j < 3; j++)
			{
				std::cout << std::right << std::setw(10)
				<< print_trunc(contact[i].info[j]) << "|";
			}
			std::cout << std::endl;
		}
	}
}

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
		std::cout << "\033[34m" << "Enter a command : " << "\033[0m";
		std::getline(std::cin, input);
		if (command.find(input) != command.end())
		{
			// Si l'entrée de l'utilisateur correspond à une fonction, l'exécuter
			(directory.*command[input])();
		}
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
