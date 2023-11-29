#---COMMON_VAR-----------------------------------
NAME		=	dreamjob
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
#---PHILO_VAR----------------------------------
SRC			=	Account.cpp \
				tests.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER_DIR	=	header/
HEADER		=	Account.hpp

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING dreamjob...\n"
				@$(CXX) $(FLAGS) -I $(HEADER_DIR) $(OBJS) -o $@
				@echo "\033[1;32m./dreamjob created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -I $(HEADER_DIR) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting dreamjob object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting dreamjob executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean
				$(MAKE) all

.PHONY:			all clean fclean re