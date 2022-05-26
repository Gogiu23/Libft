# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 13:12:52 by gdominic          #+#    #+#              #
#    Updated: 2022/05/25 18:48:10 by gdominic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c 

SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


OBJS = ${SRC:.c=.o}
OBJBONUS = ${SRCBONUS:.c=.o}

DEPS = libft.h 

all: $(NAME)

$(NAME): $(OBJS) $(DEPS)
	@ar rcs $@ $^
	@ranlib ${NAME}
	@echo Archive\ created!!

bonus: ${OBJS} ${OBJBONUS}
	@ar rcs ${NAME} ${OBJS} ${OBJBONUS}
	@ranlib ${NAME}
	@touch $@
	@echo Bonus done!!! Congrats!!

clean:
	@/bin/rm -f $(OBJS)
	@/bin/rm -f a.out
	@rm -f ${OBJBONUS}

fclean: clean
	@/bin/rm -f $(NAME)
	@rm -f bonus

re: fclean all

.PHONY: all clean fclean re