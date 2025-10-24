NAME        := libftprintf.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -f

# Directories
UTILS_DIR   := utils
LIBFT_DIR   := libft

# Utility source files (listed explicitly)
UTILS_FILES := \
    ft_dispatch_specifier.c \
    ft_hex_len.c \
    ft_int_len.c \
    ft_printchar.c \
    ft_printdecimals.c \
    ft_printlowerhex.c \
    ft_printpointer.c \
    ft_printstr.c \
    ft_printunsignedint.c \
    ft_printupperhex.c \
    ft_unsigned_len.c

# Full source list (excluding main.c)
SRC := ft_printf.c $(addprefix $(UTILS_DIR)/, $(UTILS_FILES))

# Object files
OBJ := $(SRC:.c=.o)

# Includes
INCLUDES := -I. -I$(LIBFT_DIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
