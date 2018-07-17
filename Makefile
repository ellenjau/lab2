all:lab2

lab2: haha.o main.o
	g++ -o lab2 haha.o main.o
HAHA.o: haha.cpp haha.h
	g++ -c haha.cpp
main.o: main.cpp haha.h
	g++ -c main.cpp
clean:
	rm lab2 *.o
