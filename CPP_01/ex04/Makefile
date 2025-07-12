# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruida-si <ruida-si@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/02 17:05:14 by ruida-si          #+#    #+#              #
#    Updated: 2025/07/12 14:51:39 by ruida-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 00_utils_innit.cpp \
    01_utils_replace.cpp \
    main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re