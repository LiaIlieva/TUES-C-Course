all: safeadd.exe safedivide.exe safemultiply.exe safesubstract.exe
safeadd.exe: safeadd.c safeint.o util.o
	gcc safeadd.c safeint.o util.o -o safeadd.exe

safedivide.exe: safedivide.c safeint.o util.o
	gcc safedivide.c safeint.o util.o -o safedivide.exe

safemultiply.exe: safemultiply.c safeint.o util.o
	gcc safemultiply.c safeint.o util.o -o safemultiply.exe

safesubstract.exe: safesubstract.c safeint.o util.o
	gcc safesubstract.c safeint.o util.o -o safesubstract.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

util.o: util.h util.c
	gcc -c util.c -o util.o

clean:
	del -f *.exe *.o