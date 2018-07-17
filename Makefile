all:lab2

lab2: HAHA.o main.o
	g++ -o lab2 HAHA.o main.o
HAHA.o: HAHA.cpp haha.h
	g++ -c HAHA.cpp
main.o: main.cpp haha.h
	g++ -c main.cpp
clean:
	rm lab2 *.o
