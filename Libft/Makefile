CC = gcc

CFLAGS = -Wall -Werror -Wextra

TARGET = main

SRCS = $(wildcard *.c)



all : $(TARGET)

$(TARGET) : $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)	
	@./main

clean :
	@rm -f $(OBJS) $(TARGET)

re: clean all

.PHONY: all clean re

