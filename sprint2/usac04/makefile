exUS04: main.o asm.o
	gcc -g main.o asm.o -o exUS04

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o

clean:
	rm -f *.o exUS04

run: exusac04
	./exusac04

debug: exusac04
	gdb -tui ./exusac04
