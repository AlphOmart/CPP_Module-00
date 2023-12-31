#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "utils.hpp"

class  PhoneBook
{
private:

	Contact _contact[8];
	int		_index;
	int		_cont_nbr;

public:

	PhoneBook(int val_1, int val_2);
	~PhoneBook();

	void	add();
	void	search();
	void	select(int nbr);
	void	print_id(int id);
};

#endif