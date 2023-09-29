#---COMMON_VAR-----------------------------------
NAME		=	phonebook
CC			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
#---PHILO_VAR----------------------------------
SRC			=	phonebook.cpp \
				add.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER_DIR	=	header/
HEADER		=	header/classes.hpp \
				header/Contact.hpp \
				header/PhoneBook.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING phonebook...\n"
				@$(CC) $(FLAGS)  -I $(HEADER_DIR) $(OBJS) -o $@
				@echo "\033[1;32m./phonebook created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CC) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting phonebook object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting phonebook executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean all

.PHONY:			all clean fclean re