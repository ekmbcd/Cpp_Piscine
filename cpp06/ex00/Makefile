NAME     := convert

SRCS     := convert.cpp
OBJS     := $(SRCS:.cpp=.o)

CPP      := clang++
CPPFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $@
	@echo Done!

%.o: %.cpp
	@echo Compiling $<...
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re