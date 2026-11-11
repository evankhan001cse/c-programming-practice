CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic
BUILD_DIR = build

SOURCES = 01-hello-world.c 02-input-output.c 03-even-odd.c 04-largest-of-three.c
PROGRAMS = $(SOURCES:%.c=$(BUILD_DIR)/%)

.PHONY: all clean list

all: $(PROGRAMS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@

list:
	@printf '%s\n' $(SOURCES)

clean:
	rm -rf $(BUILD_DIR)
