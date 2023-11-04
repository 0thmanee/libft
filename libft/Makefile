SRCF = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		ft_strnstr.c ft_strlcpy.c ft_atoi.c ft_strlcat.c ft_calloc.c \
		ft_bzero.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_substr.c
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		

OBJF = $(SRCF:.c=.o)


OBJBF = $(BONUSF:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)


$(NAME):$(OBJF)
	ar -rc $(NAME) $(OBJF)
clean:
	$(RM) $(OBJF) $(OBJBF)

fclean: clean
	$(RM) $(NAME)

re: fclean all
