CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra
LDFLAGS = -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -L/opt/homebrew/lib -lglfw -lglew
OBJS = applicationclass.o inputclass.o systemclass.o main.o openglclass.o
OUT = client
$(OUT): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(OBJS) $(LDFLAGS)
applicationclass.o: applicationclass.cpp
	$(CXX) $(CXXFLAGS) -c applicationclass.cpp
inputclass.o: inputclass.cpp
	$(CXX) $(CXXFLAGS) -c inputclass.cpp
systemclass.o: systemclass.cpp
	$(CXX) $(CXXFLAGS) -c systemclass.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
openglclass.o: openglclass.cpp
	$(CXX) $(CXXFLAGS) -c openglclass.cpp
run: $(OUT)
	./$(OUT)
clean:
	rm -f $(OUT) $(OBJS)
