COMPILER = gcc
IN			 = cqclock.c
OUT			 = cqclock

REQUIRED_FLAGS = -include time.h -Wno-error=implicit-int -Wno-error=implicit-function-declaration -Wno-error=incompatible-pointer-types
OPTIONAL_FLAGS = -s -w -O2

all: build run

build:
	@$(COMPILER) $(IN) -o $(OUT) $(REQUIRED_FLAGS) $(OPTIONAL_FLAGS)

run:
	@./$(OUT)
