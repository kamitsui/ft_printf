# Directories
INC_DIR = ../include

# Source files
SRCS = ft_bzero.c ft_strjoin_free.c

# Object files and dependency files
OBJS = $(SRCS:%.c=%.o)

# Library name
LIB = libft.a

# Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra
INC = -I$(INC_DIR)

# Rules for building object files
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Default target
all: $(LIB)

# Library target
$(LIB): $(OBJS)
	ar rcs $@ $^

$(OBJS): $(SRCS)

# Clean target
clean:
	rm -f $(OBJS) $(SRCS)

# Clean and remove library target
fclean: clean
	rm -f $(LIB)

# Rebould target
re:
	fclean all

.PHONY: all clean fclean re
