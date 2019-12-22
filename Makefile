result: test.o main.o
	g++ -Wall -o result test.o main.o
test: test.cpp test.h
	g++ -Wall -c test.cpp test.h
main: main.cpp
	g++ -Wall -c main.cpp
clean:
	rm -r *.o result
