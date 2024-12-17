# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c push.c swap.c reverse_rotate.c rotate.c ft_split_diff.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap

# Paths to libraries
LIBFT_DIR = libft
FT_PRINTF_DIR = ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

# Rules
all: $(LIBFT) $(FT_PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF): $(LIBFT)
	$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(FT_PRINTF)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re