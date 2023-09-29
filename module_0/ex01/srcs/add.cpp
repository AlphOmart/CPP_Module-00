#include "../header/classes.hpp"

void	Contact::add_name()
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		if (!info[i].empty())
			info[i] = "";
		while (info[i].empty())
		{
			std::cout << "\033[36mAdd " << fields[i] << " : \033[0m";
			std::getline(std::cin, info[i]);
			if (info[i].empty())
				std::cout << "\033[31m*please enter valid information*\033[0m" << std::endl;
		}
	}
}

void	PhoneBook::add()
{
	if (this->index == -1 || 7 < this->index)
		this->index = 0;
	if (cont_nbr < 8)
		this->cont_nbr++;
	this->contact[this->index].add_name();
	this->index++;
}