# Versión mejorada: Makefile con variables automáticas y patrones
LIB_OBJECTS=Square.o Triangle.o Circle.o

all: main

main: main.o libfigures.a
	g++ $< -L. -lfigures -0 $@

libfigures.a: $(LIB_OBJECTS)
	ar rs $@ $^

%.o: %.cpp
	g++ -Iheaders -c $<

clean:
	$(RM) *.o *.a main
