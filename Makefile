# Compiler
CC = clang
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MMD -MP -MF $(@:$(OBJ_DIR/%.o=$(DEP_DIR)/%.d)
INC = -I$(INC_DIR)

# Directories
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
	   decimal.c

# Object files and dependency files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))
DEPS = $(addprefix $(DEP_DIR)/, $(SRCS:%.c=%.d))

# Library name
NAME = libftprintf.a
TARGET = $(NAME:%=$(OBJ_DIR)/%)

# vpath for serching source files in multiple directories
vpath %.c $(SRC_DIR)

# Rules for building object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEP_DIR)/%.d | $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(FLAGS) $(DFLAGS) $(INC) -c $< -o $@

$(DEP_DIR)/%.d: $(SRC_DIR)/%.c | $(DEP_DIR)
	$(CC) $(CFLAG) $(DFLAG) $(INC) -c $< -o /dev/null

$(OBJ_DIR) $(DEP_DIR):
	mkdir -p $@

# Default target
all: $(TARGET)

# Library target
$(TARGET): $(OBJS)
	ar rcs $@ $^

# Clean target
clean:
	rm -rf $(OBJ_DIR)

# Clean and remove library target
fclean: clean
	rm -f $(TARGET)

# Rebuild target
re: fclean all

.PHONY: all clean fclean re
