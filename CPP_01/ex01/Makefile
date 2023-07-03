###################################### BEG_1 ####

NAME        = Zombie

#------------------------------------------------#
#   INGREDIENTS                                  #
#------------------------------------------------#
# SRCS      source files
# OBJS      object files
#
# CC        compiler
# CFLAGS    compiler flags

SRCS        = main.cpp newZombie.cpp Zombie.cpp Zombie.hpp
OBJS        = Zombie.o main.o newZombie.o

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -g

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM        force remove
# MAKEFLAGS make flags

RM          = rm -f
MAKEFLAGS   += --no-print-directory

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all       default goal
# $(NAME)   linking .o -> binary
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#

.PHONY: clean fclean re

####################################### END_1 ####