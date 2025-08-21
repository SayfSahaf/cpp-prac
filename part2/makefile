output: main.o intarray.o
	clang++ -std=c++17 -o output main.o intarray.o

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp

intarray.o: intarray.cpp
	clang++ -std=c++17 -c intarray.cpp

run: output
	./output

clean:
	rm -f output main.o intarray.o
