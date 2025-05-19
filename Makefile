CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wvla
TARGET = converter
SRC = converter.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $< -lm

clean:
	rm -f $(TARGET)
