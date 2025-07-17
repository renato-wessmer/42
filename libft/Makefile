# Name of the project 
NAME = libft.a

#Variables
SRC_DIR = functions
INC_DIR = includes

# Compiler
CC = gcc

# Flags for compiler
CC_FLAGS=-Wall \
         -Wextra \
         -Werror \
         -I$(INC_DIR)

# Source

TESTING_DIR = $(SRC_DIR)/Testing_and_Type_Checking_Functions
TESTING_SRC = $(TESTING_DIR)/ft_isalnum.c \
              $(TESTING_DIR)/ft_isalpha.c \
              $(TESTING_DIR)/ft_isascii.c \
              $(TESTING_DIR)/ft_isdigit.c \
              $(TESTING_DIR)/ft_isprint.c \
              $(TESTING_DIR)/ft_atoi.c





# Testing and Type Checking Functions
      SRC = $(SRC_DIR)/ft_isalnum.c $(SRC_DIR)/ft_isalpha.c $(SRC_DIR)/ft_isascii.c $(SRC_DIR)/ft_isdigit.c $(SRC_DIR)/ft_isprint.c $(SRC_DIR)/ft_atoi.c \
# Conversion Functions
      $(SRC_DIR)/ft_atoi.c $(SRC_DIR)/ft_itoa.c $(SRC_DIR)/ft_tolower.c $(SRC_DIR)/ft_toupper.c \
# Memory Manipulation Functions
      $(SRC_DIR)/ft_bzero $(SRC_DIR)/ft_calloc $(SRC_DIR)/ft_memchr.c $(SRC_DIR)/ft_memcmp $(SRC_DIR)/ft_memcpy.c $(SRC_DIR)/ft_memmove.c \
      $(SRC_DIR)/ft_memset.c \
# String Manipulation Functions
      $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strchr.c $(SRC_DIR)/ft_strdup.c $(SRC_DIR)/ft_striteri.c $(SRC_DIR)/ft_strjoin.c $(SRC_DIR)/ft_strlcat.c \
      $(SRC_DIR)/ft_strlcpy.c $(SRC_DIR)/ft_strmapi.c $(SRC_DIR)/ft_strncmp.c $(SRC_DIR)/ft_strnstr.c $(SRC_DIR)/ft_strrchr.c $(SRC_DIR)/ft_strtrim.c \
      $(SRC_DIR)/ft_substr.c
# Processing Functions
      $(SRC_DIR)/ft_split.c \
# Input/Output Functions
      $(SRC_DIR)/ft_putchar_fd.c $(SRC_DIR)/ft_putendl_fd.c $(SRC_DIR)/ft_putnbr_fd.c $(SRC_DIR)/ft_putstr_fd.c \
# Bonus functions - lembrar de retirar se preciso
      $(SRC_DIR)/ft_lstnew.c $(SRC_DIR)/ft_lstadd_front.c $(SRC_DIR)/ft_lstsize.c $(SRC_DIR)/ft_lstlast.c $(SRC_DIR)/ft_lstadd_back.c \
      $(SRC_DIR)/ft_lstdelone.c $(SRC_DIR)/ft_lstclear.c $(SRC_DIR)/ft_lstiter.c $(SRC_DIR)/ft_lstmap.c 

# Transformation
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all