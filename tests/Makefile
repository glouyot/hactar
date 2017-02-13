AUTHORS := glouyot\nhmartzol

NAME := test.bin

INCLUDES := -I../framework/ -I. -I../../libft/inc

FRAMEWORK_PATH := ../framework
FRAMEWORK_NAME := libunit.a

FLAGS := -Wall -Wextra -Werror

ARGS := ../framework_tests/framework_test.a

OBJECTS := main.o\
			strlen/00_launcher.o\
			strlen/01_basic_test.o\
			strlen/02_null_test.o\
			strlen/03_ko_test.o\
			strnew/00_launcher.o\
			strnew/01_time_out_test.o\
			strnew/02_bus_error_test.o\
			strnew/03_abort_test.o\
			putchar/00_launcher.o\
			putchar/01_put_test.o

ifneq ($(shell make -q -C $(FRAMEWORK_PATH); echo $$?), 0)
.PHONY: $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME)
endif

ifneq ($(shell make -q -C ../framework_tests; echo $$?), 0)
.PHONY: ../framework_tests/framework_test.a
endif

.PHONY: all test clean fclean re

all: $(NAME)

../framework_tests/framework_test.a:
	make -C ../framework_tests

$(FRAMEWORK_PATH)/$(FRAMEWORK_NAME):
	make -C $(FRAMEWORK_PATH)

%.o: %.c tests.h
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	./$(NAME)

$(NAME): $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) ../framework_tests/framework_test.a $(OBJECTS) tests.h
	gcc $(OBJECTS) $(FRAMEWORK_PATH)/$(FRAMEWORK_NAME) $(ARGS) -o $(NAME)

auteur:
	@echo $(AUTHORS) > auteur

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
