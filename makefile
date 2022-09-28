# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:30:24 by jcharnec          #+#    #+#              #
#    Updated: 2022/09/28 12:21:58 by jcharnec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NOMBRE DEL ARCHIVO
NAME = libft.a

# HEADER QUE ALMACENA TODOS LOS ARCHIVOS
HEADER = libft.h

MD = mkdir -p
LIB = ar rcs
RM = rm -f


FLAGS = -Werror -Wextra -Wall -MMD

# NOMBRE DE LOS ARCHIVOS 
SRC = 	ft_atoi.c \
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
		ft_toupper.c

# DIRECTORIO QUE CREAMOS PARA GUARDAR LOS .o
# OBJ_DIR = obj/
OBJ = $(SRC:.c=.o)

# COMPILAR LOS ARCHIVOS
# CC = cc

# -MMD CREA LAS DEPENDENCIAS


#OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
#OBJBONUS = $(addprefix $(OBJ_DIR), $(SRCBONS: .c=.o))

DEP = $(SRC:.c=.d)
#DEP = $(addsuffix .d, $(basename $(OBJ)))

# CREAMOS DIRECTORIO -p + SI YA EXISTE NO LO HACE

# AR = ar -rcs

# $@ hace referencia a lo que hay antes de los :
# $< hace referencia a lo que hay antes de los :
# % = cualquier cosa es com *
# $(OBJ_DIR)%.o: %.c
# BONUS: $(OBJ) $(OBJBONUS)
#	$(AR) $(NAME) $(OBJBONUS)
#	@touch $@

# NORMAS
all : $(NAME)

%.o : %.c
	$(MD) $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
	

$(NAME):$(OBJ) $(HEADER)
	$(LIB) $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
		$(RM) $(OBJ)
		$(RM) $(DEPS)

# BONS ES UN PARCHE PARA QUE NO HAGA RELINK TODO EL RATO
fclean:	clean
		$(RM) $(NAME)

re: fclean all
-include $(DEP)
# BUSCARA QUE ES
.PHONY: clean fclean all re