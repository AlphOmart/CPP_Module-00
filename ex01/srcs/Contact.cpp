#include "../header/utils.hpp"

std::string Contact::get_info (int i)
{
	return (this->_info[i]);
}

void	Contact::add_info()
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};

	for (int i = 0; i < 5; i++)
	{
		if (!_info[i].empty())
			_info[i] = "";
		while (_info[i].empty())
		{
			std::cout << L_BLUE << "Add " << fields[i] << " : " << WHITE;
			std::getline(std::cin, _info[i]);
			if (!std::cin)
			{
				std::cout << RED << "\ninput was close !\nExiting..." << WHITE << std::endl;
				exit(1);
			}
			if (_info[i].empty())
				std::cout << NOT_INF << std::endl;
		}
	}
}