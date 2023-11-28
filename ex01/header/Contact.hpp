#include "classes.hpp"

class Contact
{
private:
	std::string	_info[5];
public:

	void		add_info();
	std::string	get_info(int i);
};
