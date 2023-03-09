# Directories
#SRC_DIR = src
SRC_DIR = src \
		  src/process_utils \
		  src/conversion_utils
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
	   u_va_arg.c

# Object files and dependency files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
DEPS = $(addprefix $(DEP_DIR)/, $(SRCS:.c=.d))

# Library name
NAME = libftprintf.a
LIBFT = $(LIBFT_DIR)/libft.a

# vpath for serching source files in multiple directories
vpath %.c $(SRC_DIR)

# Compiler
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
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
