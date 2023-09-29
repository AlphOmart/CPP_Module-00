#include "classes.hpp"

void	Contact::add_name()
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "\033[36m" << "add " << fields[i] << " : " << "\033[0m";
//		std::cin >> info[i];
		while (info[i].empty())
			std::getline(std::cin, info[i]);;
	}
}

void	PhoneBook::add()
{
	if (this->index == -1 || 7 < this->index)
		this->index = 0;
	contact[this->index].add_name();
	this->index++;
	if (cont_nbr < 8)
		this->cont_nbr++;
}