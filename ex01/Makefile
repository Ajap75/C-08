# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:53:29 by anastruc          #+#    #+#              #
#    Updated: 2025/04/04 13:13:30 by anastruc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98 -g3

PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m

HEADER = Span.hpp \


SRCS = main.cpp \
Span.cpp \

PSRCS = $(addprefix srcs/, $(SRCS))

PHEADERS = $(addprefix headers/, $(HEADER))


OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);

all : $(NAME)

objs/%.o: srcs/%.cpp $(PHEADERS)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Span COMPILED \n$(NC) "


clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  Span CLEANED \n$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  Span FULLY CLEANED \n$(NC)"

leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

re : fclean all

.PHONY : all clean fclean re bonus