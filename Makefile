# AIS Makefile
CC = gcc
CFLAGS = -I./include -Wall -Wextra -O2
LDFLAGS = 

SRC = kernel/main.c hal/ais_hal.c drivers/universal_bridge.c drivers/samsung_bridge.c drivers/redmi_bridge.c
OBJ = $(SRC:.c=.o)
TARGET = ais_kernel.bin

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
