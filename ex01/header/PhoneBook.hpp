#include "classes.hpp"

class  PhoneBook
{
private:
	int		index;
	int		cont_nbr;
public:


	Contact contact[8];

	PhoneBook(int val_1, int val_2)
		: index(val_1),cont_nbr(val_2) {};
	~PhoneBook()
	{};

	void	add();
	void	search();
	void	select(int nbr);
	void	print_id(int id);
};