#include "classes.hpp"

class  PhoneBook
{
public:
	int		index;
	int		cont_nbr;
	Contact contact[8];
	void	add();
	void	search();
	void	select(int nbr);
	void	print_id(int id);
};