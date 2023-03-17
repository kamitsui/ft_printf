# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 14:39:52 by kamitsui          #+#    #+#              #
#    Updated: 2023/03/17 15:30:47 by kamitsui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
#SRC_DIR = src
SRC_DIR = src \
		  src/process_utils \
		  src/conversion_utils \
		  src/conversion_utils/unsigned_arg
OBJ_DIR = obj
INC_DIR = include
DEP_DIR = .dep
LIBFT_DIR = libft

# Source files
SRCS = \
	   ft_printf.c \
	   process.c \
	   conversion.c \
	   \
	   letter.c \
	   flag.c \
	   conv.c \
	   error.c \
	   add_to_buff.c \
	   \
	   decimal.c \
	   u_decimal.c \
	   octal.c \
	   hexadecimal.c \
	   pointer.c \
	   character.c \
	   string.c \
	   percent.c \
	   itoa_buff.c \
	   \
	   u_va_arg.c \
	   u_hh.c \
	   u_ll.c \
	   u_h.c \
	   u_l.c \
	   u_int.c

# Object files and dependency files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
DEPS = $(addprefix $(DEP_DIR)/, $(SRCS:.c=.d))

# Library name
NAME = libftprintf.a
LIBFT = $(LIBFT_DIR)/libft.a

# vpath for serching source files in multiple directories
vpath %.c $(SRC_DIR)

# Compiler
CC = cc
#CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -g
#CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
DFLAGS = -MMD -MP -MF $(@:$(OBJ_DIR)/%.o=$(DEP_DIR)/%.d)
IFLAGS = -I$(INC_DIR)
#LFLAGS = -L$(LIBFT_DIR) -lft

# Rules for building object files
#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/%/%.c $(DEP_DIR)/%.d
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS) -c $< -o $@

#$(DEP_DIR)/%.d: $(SRC_DIR)/%.c $(SRC_DIR)/%/%.c
$(DEP_DIR)/%.d: %.c
	@mkdir -p $(DEP_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS) -c $< -o /dev/null

#$(DEPS):

# Default target
all: $(NAME)

# Library target
$(NAME): $(LIBFT) $(DEPS) $(OBJS)
	cp $(LIBFT) $@
	ar rcs $@ $(OBJS)
#	ranlib $@
#	ar rcs $@ $^

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean target
clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

# Clean and remove library target
fclean: clean
	rm -f $(NAME)

# Rebuild target
re: fclean all

#include $(DEPS)

.PHONY: all clean fclean re
