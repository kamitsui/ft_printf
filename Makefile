# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 14:39:52 by kamitsui          #+#    #+#              #
#    Updated: 2023/03/25 14:47:09 by kamitsui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
#SRC_DIR = src
SRC_DIR = src \
		  src/process_utils \
		  src/conversion_utils \
		  src/conversion_utils/unsigned_arg \
		  src/conversion_utils/signed_arg \
		  src/formalize_utils
OBJ_DIR = obj
INC_DIR = include
DEP_DIR = .dep
LIBFT_DIR = libft

# Source files
SRCS = \
	   ft_printf.c \
	   process.c \
	   conversion.c \
	   join_to_out.c \
	   \
	   letter.c \
	   flag.c \
	   field.c \
	   width.c \
	   precision.c \
	   get_field_nbr.c \
	   prefix.c \
	   type.c \
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
	   u_int.c \
	   \
	   s_va_arg.c \
	   s_hh.c \
	   s_ll.c \
	   s_h.c \
	   s_l.c \
	   s_int.c \
	   \
	   formalize.c \
	   adjust.c \
	   adjust_width.c \
	   adjust_prec.c \
	   adjust_number.c \
	   adjust_string.c \
	   adjust_sign.c \
	   adjust_hash.c \
	   pad_str.c \
	   pad_n_str.c \
	   pad_width.c \
	   pad_prec.c \
	   sequence_unsigned.c \
	   sequence_signed.c

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
#CFLAGS = -Wall -Wextra -Werror -fsanitize=address
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

bonus: $(NAME)

# Clean target
clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

# Clean and remove library target
fclean: clean
	rm -f $(NAME)

# Rebuild target
re: fclean all

#include $(DEPS)

.PHONY: all bonus clean fclean re
