AUTHORS := glouyot\nhmartzol

NAME := test_libft.bin

INCLUDES := -I../framework/ -I. -I../../libft/inc

FRAMEWORK_PATH := ../framework
FRAMEWORK_NAME := libunit.a

FLAGS := -Wall -Wextra -Werror

ARGS := ./libft/libft.a

OBJECTS := main.o\
			strlen/00_launcher.o\
			strlen/01_basic_test.o\
			strlen/02_null_test.o\
			strlen/03_empty_test.o\
			strlen/04_zero_test.o\
			strlen/05_little_test.o\
			strdup/00_launcher.o\
			strdup/01_basic_dup_test.o\
			strdup/02_empty_dup_test.o\
			strdup/03_null_dup_test.o\
			strdup/04_malloc_dup_test.o\
			strdup/05_size_dup_test.o\
			strcmp/00_launcher.o\
			strcmp/01_basic_cmp_1_test.o\
			strcmp/02_basic_cmp_2_test.o\
			strcmp/03_empty_cmp_test.o\
			strcmp/04_zero_cmp_1_test.o\
			strcmp/05_zero_cmp_2_test.o

ifneq ($(shell make -q -C $(FRAMEWORK_PATH); echo $$?), 0)
.PHONY: $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME)
endif

ifneq ($(shell make -q -C libft; echo $$?), 0)
.PHONY: libft/libft.a
endif

.PHONY: all test clean fclean re

all: $(NAME)

libft/libft.a:
	make -C libft

$(FRAMEWORK_PATH)/$(FRAMEWORK_NAME):
	make -C $(FRAMEWORK_PATH)

%.o: %.c tests_libft.h
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	./$(NAME)

$(NAME): $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) $(ARGS) $(OBJECTS) tests_libft.h
	gcc $(OBJECTS) $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) $(ARGS) -o $(NAME)

auteur:
	@echo $(AUTHORS) > auteur

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
