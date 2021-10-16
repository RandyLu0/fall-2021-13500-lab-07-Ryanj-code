# Makefile

main: main.o unindent.o
	g++ -o main main.o unindent.o


main.o: main.cpp unindent.h

unindent.o: unindent.cpp unindent.h


clean:
	rm -f main.o unindent.o
