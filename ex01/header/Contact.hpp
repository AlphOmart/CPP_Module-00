#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "utils.hpp"

class Contact
{
private:
	std::string	_info[5];
public:

	void		add_info();
	std::string	get_info(int i);
};

#endif