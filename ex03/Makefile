NAME    = Intern
OS		= $(shell uname)

# directories
SRCDIR        =    ./src
INCDIR        =    ./includes
OBJDIR        =    ./obj

HEADER		=	Bureaucrat.hpp\
				Form.hpp\
				PresidentialPardonForm.hpp\
				ShrubberyCreationForm.hpp\
				RobotomyRequestForm.hpp\
				Intern.hpp

# src / obj files
SRC        =	main.cpp\
				Bureaucrat.cpp\
				Form.cpp\
				PresidentialPardonForm.cpp\
				ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp\
				Intern.cpp
				

OBJ        = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
OBJINC		= $(addprefix $(INCDIR)/,$(HEADER))
# compiler
CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98 -g3 #-fsanitize=address


all:	obj $(NAME)

obj:	
		mkdir -p $(OBJDIR)


$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp	${OBJINC}
				$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<


$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
		rm -rf $(OBJDIR) *_shrubbery

fclean:	clean
		rm -rf $(NAME)

re:		fclean
		make all