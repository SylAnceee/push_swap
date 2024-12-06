# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
INCLUDES = libft.h

# Output library name
NAME = libft.a

# Phony targets are not actual files
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	ar rcs $(NAME) $(OBJS)

# Rule to create object files
%.o: %.c $(INCLUDES)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean object files
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS)

# Rule to clean everything (object files and library)
fclean: clean
	@echo "Cleaning library..."
	rm -f $(NAME)

# Rule to rebuild everything
re: fclean all
