# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 19:19:44 by ahussein          #+#    #+#              #
#    Updated: 2022/11/07 19:19:45 by ahussein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAG =  -Wall -Werror -Wextra -c

RM = rm -f

AR = ar rc

MAINSRC = \
 	./ft_strnstr.c \
 	./ft_split.c  \
	 ./ft_substr.c \
	 ./ft_strlen.c

MAINOBJ = $(subst .c,.o,$(MAINSRC))

all : $(NAME)

$(NAME) :  $(MAINOBJ)
	$(CC) $(CFLAG) $(MAINSRC)
	$(AR) $(NAME) $(MAINOBJ)

clean : 
	$(RM) $(MAINOBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

rebonus : fclean bonus
