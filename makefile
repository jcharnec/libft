# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 12:21:19 by jcharnec          #+#    #+#              #
#    Updated: 2022/09/22 13:26:04 by jcharnec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NOMBRE DEL ARCHIVO
NAME = libft.a

# NOMBRE DE LOS ARCHIVOS 
SRC = 	ft_strlen.c 
		ft_ialnum.c 
		ft_isalpha.c
		ft_atoi.c
		ft_isascii.c
		ft_isdigit.c
		ft_isprint.c
		ft_memset.c
		ft_strchr.c
		ft_strlat.c
		ft_strlcpy.c
		ft_strlen.c
		ft_strncmp.c
		ft_strnstr.c
		ft_tolower.c
		ft_topper.c
		
# SRC = $(wildcards *.c)

# DIRECTORIO QUE CREAMOS PARA GUARDAR LOS .o
OBJ_DIR = obj/

# HEADER QUE ALMACENA TODOS LOS ARCHIVOS
HEADER = libft.h

# COMPILAR LOS ARCHIVOS
# -MMD CREA LAS DEPENDENCIAS
CFLAGS = -Werror -Wextra -Wall -MMD

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
#OBJBONUS = $(addprefix $(OBJ_DIR), $(SRCBONS: .c=.o))

DEP = $(addsuffix .d, $(basename $(OBJ)))

# CREAMOS DIRECTORIO -p + SI YA EXISTE NO LO HACE
MD = mkdir -p

AR = ar -rcs

# $@ hace referencia a lo que hay antes de los :
# $< hace referencia a lo que hay antes de los :
# % = cualquier cosa es com *
$(OBJ_DIR)%.o: %.c
	$(MD) $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# NORMAS
all : $(NAME)

-include $(DEP)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# BONUS: $(OBJ) $(OBJBONUS)
#	$(AR) $(NAME) $(OBJBONUS)
#	@touch $@

clean:
	rm -rf $(OBJ_DIR)
	rm -rf bonus
# BONS ES UN PARCHE PARA QUE NO HAGA RELINK TODO EL RATO
fclean:
	rm -f $(NAME)

re: fclean all

# BUSCARA QUE ES
.PHONY: clean fclean all re