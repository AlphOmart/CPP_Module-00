#include "classes.hpp"

void	Contact::add_name()
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "add " << fields[i] << " : ";
		std::cin >> info[i];
	}
}

void	PhoneBook::add(int index)
{
	contact[index].add_name();
	if (index >= 7)
		index = 0;
	else
		index++;
}