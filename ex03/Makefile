NAME 			= 	diamondtrap
CPP 			= 	c++
CPPFLAGS 		= 	-Wall -Wextra -Werror -Wno-shadow -Wshadow -std=c++98

OBJS = ${SRCS:.cpp=.o}
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INCL = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all: $(NAME)

%.o: %.cpp $(INCL)
	$(CPP) $(CPPFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
