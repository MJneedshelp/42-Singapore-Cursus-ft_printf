# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 22:10:59 by mintan            #+#    #+#              #
#    Updated: 2024/06/09 11:56:57 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -c
# LDFLAG = -l$(LIBDIR)

# Definitions
NAME = libftprintf.a
SRCDIR = src
OBJDIR = obj
LIBDIR = libft
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.c=.o)))

# Target to make using Make all
all: $(NAME)

# Rule to create the ft_printf LIBRARY. Uses the objects and libft.a
# r > add specified files into ar | c > create archive| s > write index to ar
# "@" > Target
$(NAME): $(OBJECTS) $(LIBDIR)/libft.a
	ar rcs $@ $(OBJECTS) $(LIBDIR)/*.o

# Rule to create the OBJECTS
# "<" > Prerequisites
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

# Rule to create libft.a. CD into the libft folder and trigger the makefile
$(LIBDIR)/libft.a:
	cd $(LIBDIR) && make all bonus

# Clear the build files
clean:
	rm -f $(OBJECTS)
	cd $(LIBDIR) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBDIR) && make fclean

# Rule to rebuild the target
re:	fclean all

# Phony targets
.PHONY: all clean re fclean
