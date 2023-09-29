#include "classes.hpp"
#include <iomanip>

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
		std::cout << "the directory is empty" << std::endl;
	else
	{
		std::cout << "| id|  1st_name| last_name|  nickname|" << std::endl;
		for (int i = 0; i < cont_nbr; i++)
		{
			std::cout << "|  " << i + 1 << "|";
			for (int j = 0; j < 3; j++)
			{
				std::cout << std::right << std::setw(10)
				<< print_trunc(contact[i].info[j]) << "|";
			}
			std::cout << std::endl;
		}}
}

int main(void)
{
	PhoneBook directory;

	directory.index = -1;
	directory.cont_nbr = 0;
	std::string input;
	while (42)
	{
		std::cout << "Enter a command : ";
		std::cin >> input;
		if (!input.compare("ADD"))
			directory.add();
		else if (!input.compare("SEARCH"))
			directory.search();
		else if (!input.compare("EXIT"))
			break ;
	}
	return (0);
}
