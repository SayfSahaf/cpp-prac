output: main.o student.o course.o
	clang++ -std=c++17 -o output main.o student.o course.o

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp

student.o: student.cpp
	clang++ -std=c++17 -c student.cpp

course.o: course.cpp
	clang++ -std=c++17 -c course.cpp

run: output
	./output

clean:
	rm -f output main.o student.o course.o
