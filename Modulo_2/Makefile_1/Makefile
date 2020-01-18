# Esto es un comentario
main: main.o libfigures.a
	g++ main.o -L. -lfigures -o main

main.o: main.cpp
	g++ -Iheaders -c main.cpp

libfigures.a: Square.o Triangle.o Circle.o
	ar rs libfigures.a Square.o Triangle.o Circle.o

Square.o: Square.cpp
	g++ -Iheaders -fPIC -c Square.cpp

Triangle.o: Triangle.cpp
	g++ -Iheaders -fPIC -c Triangle.cpp

Circle.o: Circle.cpp
	g++ -Iheaders -fPIC -c Circle.cpp

clean:
	rm -f *.o *.a main