shell := /bin/bash
CC = gcc
DEBUG = -g
CFLAGS = -Wall -Werror
TARGET = main
SRC_FILES = $(wildcard *.c)
HEADER_FILES = $(wildcard *.h)
OBJ_FILES = $(SRC_FILES:.c=.o)
ELF_DIR = ./elf

all: $(OBJ_FILES)
	$(CC) $(OBJ_FILES) $(CFLAGS) -o $(TARGET)
	@[ -d elf ] || mkdir elf
	@mv $(OBJ_FILES) $(ELF_DIR)

%.o: %.c $(HEADER_FILES)
	$(CC) $< $(CFLAGS) -o $@ -c

err:
	@echo "Error: No source files found"

clean:
	rm -rf $(ELF_DIR)
	rm -rf $(OBJ_FILES)
	rm -rf $(TARGET)
