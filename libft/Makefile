NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RM = rm -f

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
    ft_strlen ft_memset ft_bzero ft_memcpy \
    ft_memmove ft_strlcpy ft_strlcat \
    ft_toupper ft_tolower ft_strchr \
    ft_strrchr ft_memchr ft_memcmp ft_strnstr \
    ft_atoi ft_strncmp ft_calloc ft_strdup ft_strjoin \
    ft_substr ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_putchar_fd \
    ft_strtrim ft_strmapi    ft_striteri    ft_itoa ft_split \

FILESB = ft_lstnew_bonus ft_lstadd_front_bonus ft_lstadd_back_bonus\

OBJS = $(FILES:=.o)

OBJSB = $(FILESB:=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS) $(OBJSB)
	$(AR) $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean bonus
