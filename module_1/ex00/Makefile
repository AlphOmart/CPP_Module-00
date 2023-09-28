#---COMMON_VAR-----------------------------------
NAME		=	megaphone
CC			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
#---PHILO_VAR----------------------------------
SRC			=	megaphone.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				@echo "\033[0;33m\nCOMPILING megaphone...\n"
				@$(CC) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./megaphone created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				$(CC) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting megaphone object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting megaphone executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean all

.PHONY:			all clean fclean re