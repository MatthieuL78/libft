# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 15:06:37 by malu              #+#    #+#              #
#    Updated: 2018/11/27 18:57:40 by malu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_PATH	=	srcs

SRCS		=	$(shell ls | grep -E ".+\.c")

INC			= 	-I ./

CC			=	gcc

LIBS_FLAGS	=	ar r

FLAGS		=	-Wall -Wextra -Werror

OBJS		=	$(SRCS:.c=.o)
$(NAME): $(OBJS)
	@$(LIBS_FLAGS) $(NAME) $(OBJS)
	
%.o: %.c
	@$(CC) $(INC) -o $@ -c $< $(FLAGS)
	
all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean		: clean
		@rm -rf $(NAME)

re		: fclean all
.PHONY: fclean re all clean
