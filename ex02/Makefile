# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 15:58:59 by sniemela          #+#    #+#              #
#    Updated: 2025/04/16 17:12:00 by sniemela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CPPFLAGS = -Wall -Werror -Wextra -std=c++11
CPP = c++
SOURCES = main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp

OBJDIR = obj
OBJS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re