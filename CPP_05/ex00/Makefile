# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 21:40:43 by zakariyaham       #+#    #+#              #
#    Updated: 2023/07/22 21:40:44 by zakariyaham      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Animal

CC 				= c++
CFLAGS			= -Wall -Wextra -Werror
CPPFLAGS		= -std=c++98

OBJ_PATH		= objs/

SRC				= main.cpp \
					Bureaucrat.cpp

OBJ				= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))

####### COLORS #######

GREEN = "\033[38;5;150m"
CYAN = "\033[38;5;140m"
BOLD = "\033[1m"
NC = "\033[0m"

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo ${CYAN}Compiling ${NAME}${NC} [${GREEN}OK${NC}]

$(OBJ_PATH)%.o : %.cpp
	@mkdir -p ${OBJ_PATH}
	${CC} ${CFLAGS} ${CPPFLAGS} -o $@ -c $<

clean :
	rm -rf ${OBJ_PATH}


fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean
