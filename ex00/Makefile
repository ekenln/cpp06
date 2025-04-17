NAME = scalarConverter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++11 -MMD -MP
HEADERS = -I ./include
DEPS = $(OBJ:.o=.d)

SRC_DIR = src
OBJ_DIR = obj

SRC = $(addprefix $(SRC_DIR)/, main.cpp ScalarConverter.cpp detectorFuncs.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

-include $(DEPS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
