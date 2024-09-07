# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/07 16:49:07 by rshatra           #+#    #+#              #
#    Updated: 2024/09/07 16:49:10 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = ft_replace.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

