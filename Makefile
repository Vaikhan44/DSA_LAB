.PHONY: all run clean

all: lab_1_8

lab_1_8: lab_1_8.c
	gcc -Wall -Wextra -std=c11 lab_1_8.c -o lab_1_8

run: lab_1_8
	./lab_1_8

clean:
	rm -f lab_1_8
