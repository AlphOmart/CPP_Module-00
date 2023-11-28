#include "../header/classes.hpp"

void	PhoneBook::print_id(int id)
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};
	for (int i = 0; i < 5; i++)
			std::cout << VIOLET + fields[i] + " : "WHITE + contact[id].info[i] << std::endl;
}

void	PhoneBook::select(int nbr)
{
	std::string id;
	int			nbr_id;

	while (42)
	{
		std::cout << CHOOSE;
		std::getline(std::cin, id);
		if (!std::cin)
		{
			std::cout << RED"\ninput was close !\nExiting..."WHITE << std::endl;
			exit(1);
		}
		try
		{
			nbr_id = std::stoi(id);
			if (1 <= nbr_id && nbr_id <= nbr)
			{
				print_id(nbr_id - 1);
				break ;
			}
			else
				std::cout << NOT_ID << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << NOT_ID << std::endl;
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
		std::cout << EMPTY_DIR << std::endl;
	else
	{
		std::cout << TITLE << std::endl;
		for (int i = 0; i < cont_nbr; i++)
		{
			std::cout << VIOLET"|  "WHITE << i + 1 << VIOLET"|";
			for (int j = 0; j < 3; j++)
			{
				std::cout << YELLOW << std::right << std::setw(10)
							<< print_trunc(contact[i].info[j]) << VIOLET"|";
			}
			std::cout << WHITE << std::endl;
		}
		select(cont_nbr);
	}
}
