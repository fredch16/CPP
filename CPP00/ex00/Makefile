# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 17:27:31 by fcharbon          #+#    #+#              #
#    Updated: 2024/07/12 17:35:53 by fcharbon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CC := g++
CPPFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS := megaphone.cpp
OBJ := $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
