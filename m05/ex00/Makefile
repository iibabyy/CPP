#	Colors		#

BLACK=	$(shell tput -Txterm setaf 0)
RED= 	$(shell tput -Txterm setaf 1)
GREEN= 	$(shell tput -Txterm setaf 2)
WHITE= 	$(shell tput -Txterm setaf 7)
YELLOW=	$(shell tput -Txterm setaf 3)
BLUE=	$(shell tput -Txterm setaf 6)
END= 	$(shell tput -Txterm sgr0)


CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g3

NAME = exception

SRCS = $(addprefix srcs/, Bureaucrat.cpp )

FILES = main.cpp $(SRCS)

OBJ = $(FILES:.cpp=.o)

#	Loading bar	#

G                = \e[92m
X                 = \e[0m
BAR_SIZE        = 40
TOTAL_FILES        := $(words $(FILES))
COMPILED_FILES    := 0

#				#

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo ""
	@echo "$(GREEN)$(NAME) Compiled !$(END)"

%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@$(eval COMPILED_FILES := $(shell echo $$(($(COMPILED_FILES)+1))))
	@echo -n " "
	@for i in `seq 1 $(shell echo "$$(($(COMPILED_FILES)*$(BAR_SIZE)/$(TOTAL_FILES)))")`; do \
		echo -n "$(G)▰$(X)" ; \
	done
	@for i in `seq 1 $(shell echo "$$(($(BAR_SIZE)-$(COMPILED_FILES)*$(BAR_SIZE)/$(TOTAL_FILES)))")`; do \
		echo -n "▱" ; \
	done
	@echo -n " [$(shell echo "scale=2; $(COMPILED_FILES)/$(TOTAL_FILES) * 100" | bc)%] "
	@printf "\e[0K\r"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re