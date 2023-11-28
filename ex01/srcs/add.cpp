#include "../header/classes.hpp"

void	PhoneBook::add()
{
	if (this->index == -1 || 7 < this->index)
		this->index = 0;
	if (this->cont_nbr < 8)
		this->cont_nbr++;
	this->contact[this->index].add_info();
	this->index++;
}

void	Contact::add_info()
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		if (!info[i].empty())
			info[i] = "";
		while (info[i].empty())
		{
			std::cout << L_BLUE"Add " << fields[i] << " : "WHITE;
			std::getline(std::cin, info[i]);
			if (!std::cin)
			{
				std::cout << RED"\ninput was close !\nExiting..."WHITE << std::endl;
				exit(1);
			}
			if (info[i].empty())
				std::cout << NOT_INF << std::endl;
		}
	}
}