#include "../header/classes.hpp"

void	PhoneBook::add()
{
	if (this->_index == -1 || 7 < this->_index)
		this->_index = 0;
	if (this->_cont_nbr < 8)
		this->_cont_nbr++;
	this->_contact[this->_index].add_info();
	this->_index++;
}

void	PhoneBook::print_id(int id)
{
	std::string fields[5] = {"first name", "last name", "nickname", \
							"phone number", "darkest secret"};
	for (int i = 0; i < 5; i++)
			std::cout << VIOLET + fields[i] + " : " + WHITE + _contact[id].get_info(i) << std::endl;
}

static int ft_stoi( std::string & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}

void	PhoneBook::select(int nbr)
{
	std::string id;
	int			nbr_id = 0;

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
			nbr_id = ft_stoi(id);
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
	if (_cont_nbr == 0)
		std::cout << EMPTY_DIR << std::endl;
	else
	{
		std::cout << TITLE << std::endl;
		for (int i = 0; i < _cont_nbr; i++)
		{
			std::cout << VIOLET"|  "WHITE << i + 1 << VIOLET"|";
			for (int j = 0; j < 3; j++)
				std::cout << YELLOW << std::right << std::setw(10)
							<< print_trunc(_contact[i].get_info(j)) << VIOLET"|";
			std::cout << WHITE << std::endl;
		}
		select(_cont_nbr);
	}
}
