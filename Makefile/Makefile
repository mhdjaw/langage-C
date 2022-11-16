LIB_DIR = lib/my/
LIB = libmy.a
INCLUDE = include
SRC = $(LIB_DIR)my_putchar.c $(LIB_DIR)my_putstr.c $(LIB_DIR)my_strlen.c $(LIB_DIR)my_getnbr.c $(LIB_DIR)my_putnbr.c $(LIB_DIR)my_isneg.c $(LIB_DIR)my_swap.c $(LIB_DIR)my_strcpy.c $(LIB_DIR)my_strncpy.c $(LIB_DIR)my_strcmp.c $(LIB_DIR)my_strncmp.c $(LIB_DIR)my_strcat.c $(LIB_DIR)my_strncat.c $(LIB_DIR)my_strstr.c $(LIB_DIR)my_strdup.c
OBJ	= $(SRC:.c=.o)
NAME = $(LIB)
all:	$(NAME)
$(NAME):	$(OBJ)
			ar rcs libmy.a $(LIB_DIR)*.o
			cp libmy.a lib/
			mkdir -p include
			cp $(LIB_DIR)my.h $(INCLUDE)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) lib/libmy.a
		$(RM) $(LIB)
		$(RM)r $(INCLUDE)

re:	fclean all