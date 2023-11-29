# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aennaqad <aennaqad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 15:35:28 by aennaqad          #+#    #+#              #
#    Updated: 2023/11/29 15:38:41 by aennaqad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
          ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
          ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
          ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
          ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
          ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
          ft_putnbr_fd.c ft_itoa.c ft_split.c

SRCS_B = ft_lstnew_bonus.c \
               ft_lstadd_back_bonus.c \
               ft_lstsize_bonus.c \
               ft_lstdelone_bonus.c \
               ft_lstadd_front_bonus.c \
               ft_lstclear_bonus.c \
               ft_lstlast_bonus.c \
               ft_lstiter_bonus.c \
               ft_lstmap_bonus.c

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
OBJS = $(SRCS:.c=.o)
OBJS_BNS = $(SRCS_B:.c=.o)
NAME = libft.a
AR = ar -rcs

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJS_BNS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus : $(OBJS_BNS)
	$(AR) $(NAME) $(OBJS_BNS)

.PHONY: all clean fclean re
