all: tests.exe ex2.exe

ex2.exe: ex2.c DynamicArray.o
	gcc ex2.c DynamicArray.o -o ex2.exe

tests.exe: tests.c DynamicArray.o
	gcc tests.c DynamicArray.o -o tests.exe

DynamicArray.o: DynamicArray.c DynamicArray.h util.h
	gcc -c DynamicArray.c -o DynamicArray.o

clean:
	rm -f *.o *.exe