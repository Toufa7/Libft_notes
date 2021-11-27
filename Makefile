# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otoufah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 16:04:24 by otoufah           #+#    #+#              #
#    Updated: 2021/11/27 00:10:13 by otoufah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	* // Here i'm generating a file responsible for creating our library

NAME = libft.a

#	* // Some flags to compile with very useful

CFLAGS = -Wall -Wextra -Werror

#	*// remove objects such objects (a savoir)

RM = rm -f

CC = gcc
#	* // AR stand for Archive files into our library

#	* // r = r means that if the library already exists, replace the old files within the library with your new files.
#	* // c = means create the library if it did not exist.
#	* // s = can be seen to mean 'sort' (create a sorted index of (refreshing)) the library, so that it will be indexed and faster to access the functions in the library.

AR = ar rcs

#	* // functions that must be compiled through our makefile

FUNCTIONS = ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_split.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_striteri.c\

#	*  // to creat our lib please replace all files with .c extension to .o extension

OBJECTS = $(FUNCTIONS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)	
	@echo "LIBFT CREATED SUCCESSFULLY"

// delete all .o files created by our makefile

clean :
	@$(RM) $(OBJECTS)
	@echo "ALL OBJECTS HAS BEEN DELETED"

// delete all .o files also our libft.a 

fclean : clean
	@$(RM) $(NAME)
	@echo "           REMOVED"

re : fclean all

// i give to PHONY targets name it will work even if such files named as our targets

.PHONY : clean fclean re all
