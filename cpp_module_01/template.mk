# =============================================================================
# Command Variables
# =============================================================================

DIR_INCS		= ./
OBJS			= $(SRCS:.cpp=.o)

# =============================================================================
# Command Variables
# =============================================================================

CPP				= c++
RM				= rm -rf
ifdef DEBUG
	CPPFLAGS	= --std=c++98 -g3 -fsanitize=address
else ifdef LEAKS
	CPPFLAGS	= --std=c++98 -g3
else
	CPPFLAGS	= --std=c++98 -Wall -Wextra -Werror
endif

# =============================================================================
# Target Generating
# =============================================================================

%.o		: %.cpp
	$(CPP) $(CPPFLAGS) -I $(DIR_INCS) -c $< -o $@

$(NAME)	: $(OBJS) $(INCS)
	$(CPP) $(CPPFLAGS) -I $(DIR_INCS) $(OBJS) -o $(NAME)

# =============================================================================
# Rules
# =============================================================================

.PHONY	: all
all		: $(NAME)

.PHONY	: clean
clean	:
	$(RM) $(OBJS)

.PHONY	: fclean
fclean	: clean
	$(RM) $(NAME)

.PHONY	: re
re		:
	make fclean
	make all

.PHONY	: debug
debug	:
	make DEBUG=1 all

.PHONY	: leaks
leaks	:
	make LEAKS=1 all