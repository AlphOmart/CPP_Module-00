#include "classes.hpp"
#include <iomanip>
void	PhoneBook::search()
{
	if (index == 0)
		std::cout << "the directory is empty" << std::endl;
	else
	{
		std::cout << "| id| first_name| last_name| nickname |" << std::endl;
		for (int i = 0; i < index; i++)
		{
			std::cout << "|  " << i + 1 << "|";
			for (int j = 0; j < 3; j++)
				std::cout << std::right << std::setw(9) << contact[i].info[j].substr(0, 9) + "." << "|";
			std::cout << std::endl;
		}}
}

int main(void)
{
	PhoneBook directory;

	directory.index = 0;
	std::string input;
	while (42)
	{
		std::cout << "Enter a command : ";
		std::cin >> input;
		if (!input.compare("ADD"))
			directory.add(directory.index);
		else if (!input.compare("SEARCH"))
			directory.search();
		else if (!input.compare("EXIT"))
			break ;
	}
	return (0);
}