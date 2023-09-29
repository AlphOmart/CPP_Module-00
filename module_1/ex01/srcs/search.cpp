#include "classes.hpp"

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