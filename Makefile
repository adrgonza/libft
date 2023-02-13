FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strncmp.c \
	  ft_strrchr.c \
	  ft_strdup.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_calloc.c \
	  ft_memmove.c \
	  ft_strnstr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_strnstr.c \
	  ft_striteri.c \
	  ft_substr.c \
	  ft_putnbr_fd.c \
	  ft_strmapi.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_printf.c \
	  ft_tools_printf.c \
	  get_next_line.c \

SRCS_BONUS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o) $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
