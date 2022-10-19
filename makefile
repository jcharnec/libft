# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:30:24 by jcharnec          #+#    #+#              #
#    Updated: 2022/10/12 22:02:36 by jcharnec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard Make variables

NAME		= libft.a
CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra
#OBJS		=  ${SRCS:.c=.o}
HEADER		= libft.h
AR			= ar rcs
RM			= rm -Rf ..swp -o .ft_ -o
SRCS_DIR	= srcs 
SRCB_DIR	= srcb 
OBJS_DIR	= objs
OBJB_DIR	= objb
BIN_DIR		= bin 
BIN			= libft.a

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Sources

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c \

SRCB = ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c		\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstlast.c		\
	ft_lstsize.c		\
	ft_lstnew.c			\
	ft_lstmap.c			\
	ft_lstget_at.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
OBJB = $(addprefix $(OBJB_DIR)/, $(SRCB:.c=.o))

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

${NAME} :	${OBJS}
			@$(AR) ${NAME} ${OBJS}
			@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

all:		${NAME}

bonus:	$(OBJB)

clean:
			@${RM} ${OBJS} ${OBJB}
			@echo "$(BLUE)Libft objects files cleaned!$(DEF_COLOR)"

fclean:	clean
			@${RM} ${NAME} bonus
			@echo "$(CYAN)Libft executable files cleaned!$(DEF_COLOR)"

re:		fclean all
		@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

.PHONY = all clean fclean re bonus