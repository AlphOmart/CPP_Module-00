#ifndef CLASSES_H
# define CLASSES_H

# include <iostream>
# include <string>
# include <iomanip>
# include <map>
# include "Contact.hpp"
# include "PhoneBook.hpp"

//messages
# define NOT_VALID "\033[31m*please enter valid command*\033[0m"
# define PROMPT "\033[34mEnter a command : \033[0m"
# define NOT_INF "\033[31m*please enter valid information*\033[0m"
# define CHOOSE "\033[36mChoose an identifier : \033[0m"
# define NOT_ID "\033[31m*Please, enter a valid id*\033[0m"
# define EMPTY_DIR "\033[31m*the directory is empty*\033[0m"
# define TITLE "\033[35m| id|  1st_name| last_name|  nickname|\033[0m"

//colors
# define WHITE "\033[0m"
# define L_BLUE "\033[36m"
# define VIOLET "\033[35m"
# define YELLOW "\033[33m"
#endif