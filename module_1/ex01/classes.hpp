#include <iostream>
#include <string>

class Contact
{
	public:
		int	index;
		std::string	info[5];

		void	add_name();
};

class  PhoneBook
{
	private:
	public:
		int	index;
		Contact contact[8];
		void add(int index);
		void search();
};