# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 12:21:19 by jcharnec          #+#    #+#              #
#    Updated: 2022/09/22 13:45:40 by jcharnec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NOMBRE DE LOS ARCHIVOS 
SRC = 	ft_atoi.c
		ft_bzero
		ft_ialnum.c 
		ft_isalpha.c
		ft_isascii.c
		ft_isdigit.c
		ft_isprint.c
		ft_memchr.c
		ft_memcmp.c
		ft_memcpy.c
		ft_memmove.c
		ft_memset.c
		ft_strchr.c
		ft_strlcat.c
		ft_strlcpy.c
		ft_strlen.c
		ft_strncmp.c
		ft_strnstr.c
		ft_strrchr.c
		ft_tolower.c
		ft_topper.c
		
# SRC = $(wildcards *.c)

# NOMBRE DEL ARCHIVO
NAME = libft.a

# DIRECTORIO QUE CREAMOS PARA GUARDAR LOS .o
# OBJ_DIR = obj/

# HEADER QUE ALMACENA TODOS LOS ARCHIVOS
HEADER = libft.h

# COMPILAR LOS ARCHIVOS
# -MMD CREA LAS DEPENDENCIAS

CC = gcc
CFLAGS = -Werror -Wextra -Wall

OBJ = $(SRC:.c=.o)
#OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
#OBJBONUS = $(addprefix $(OBJ_DIR), $(SRCBONS: .c=.o))

# DEP = $(addsuffix .d, $(basename $(OBJ)))

# CREAMOS DIRECTORIO -p + SI YA EXISTE NO LO HACE
MD = mkdir -p
LIB = ar rcs
RM = rm -f
# AR = ar -rcs

# $@ hace referencia a lo que hay antes de los :
# $< hace referencia a lo que hay antes de los :
# % = cualquier cosa es com *
#$(OBJ_DIR)%.o: %.c
#	$(MD) $(dir $@)
#	$(CC) $(CFLAGS) -c $< -o $@

# -include $(DEP)
$(NAME):$(OBJ) $(HEADER)
		$(LIB) $(NAME) $(OBJ)

# BONUS: $(OBJ) $(OBJBONUS)
#	$(AR) $(NAME) $(OBJBONUS)
#	@touch $@

# NORMAS
all : $(NAME)

clean:
		$(RM) $(OBJ)

# BONS ES UN PARCHE PARA QUE NO HAGA RELINK TODO EL RATO
fclean:	clean
		$(RM) $(NAME)

re: fclean all

# push:
#	git add .
#	git commit -m "auto-push"
#	git push

# BUSCARA QUE ES
.PHONY: clean fclean all re