# Directories
# SRC_DIR = src
SRC_DIR = src \
		  src/process_utils \
		  src/conversion_utils
OBJ_DIR = obj
INC_DIR = include
DEP_DIR = .dep

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
	   add_buff.c \
	   \
	   decimal.c \
	   ft_strjoin_free.c \
	   ft_bzero.c

# Object files and dependency files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
DEPS = $(addprefix $(DEP_DIR)/, $(SRCS:.c=.d))

# Library name
NAME = libftprintf.a

# vpath for serching source files in multiple directories
vpath %.c $(SRC_DIR)

# Compiler
CC = clang
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MMD -MP -MF $(@:$(OBJ_DIR)/%.o=$(DEP_DIR)/%.d)
INC = -I$(INC_DIR)

# Rules for building object files
# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEP_DIR)/%.d | $(OBJ_DIR)
$(OBJ_DIR)/%.o: %.c %.d | $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) $(INC) -c $< -o $@

$(DEP_DIR)/%.d: %.c | $(DEP_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) $(INC) -c $< -o /dev/null

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(DEP_DIR):
	mkdir -p $(DEP_DIR)

# Default target
all: $(NAME)

# Library target
$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS): $(SRCS)

# Clean target
clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

# Clean and remove library target
fclean: clean
	rm -f $(NAME)

# Rebuild target
re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
