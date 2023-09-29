#include "../header/classes.hpp"

void	PhoneBook::print_id(int id)
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};
	for (int i = 0; i < 5; i++)
			std::cout << "\033[36m" << fields[i] << " : ""\033[0m" << contact[id].info[i] << "\033[0m" << std::endl;
}

void	PhoneBook::select(int nbr)
{
	std::string id;
	int			nbr_id;

	while (42)
	{
		std::cout << "\033[36m""choose an identifier : ""\033[0m";
		std::getline(std::cin, id);
		try
		{
			nbr_id = std::stoi(id);
			if (1 <= nbr_id && nbr_id <= nbr)
			{
				print_id(nbr_id - 1);
				break ;
			}
			else
				std::cout << "\033[31m""please enter valid id""\033[0m" << std::endl;
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << "\033[31m""Please Choose a Valid id""\033[0m" << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cout << "\033[31m""Please Choose a Valid id""\033[0m" << std::endl;
		}
	}
}

std::string	print_trunc(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

void	PhoneBook::search()
{
	if (cont_nbr == 0)
		std::cout << "\033[31m*the directory is empty*\033[0m" << std::endl;
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
		select(cont_nbr);
	}
}
