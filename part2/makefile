output: main.o
	clang++ -std=c++17 -o output main.o

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp

run: output
	./output

clean:
	rm -f output main.o student.o course.o
