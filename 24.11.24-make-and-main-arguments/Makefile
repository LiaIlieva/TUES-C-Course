all: help.exe strlength.exe strconcat.exe strcompare.exe
help.exe: help.c
	gcc help.c -o help.exe

mystrings.o: mystrings.h mystrings.c
	gcc -c mystrings.c -o mystrings.o

strlength.exe: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe

strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe

clean:
	rm -f *.exe *.o

	