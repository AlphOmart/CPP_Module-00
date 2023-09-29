#include "classes.hpp"

class  PhoneBook
{
private:
public:
	int	index;
	int cont_nbr;
	Contact contact[8];
	void add();
	void search();
};