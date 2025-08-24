CXX := clang++
OUTPUT := sfmlgame

SFML_DIR := /opt/homebrew/Cellar/sfml/3.0.1
CXX_FLAGS := -03 -std=c++20 -Wno-unused-result -Wno-deprecated-declarations
INCLUDES := -I./src -I ./src/imgui -I$(SFML_DIR)/include
LDFLAGS := -03 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -L$(SFML_DIR)/lib -framework OpenGL

SRC_FILES := $(wildcard src/*.cpp src/imgui/*.cpp)
OBJ_FILES := $(SRC_FILES:.cpp=.o)

DEP_FILES := $(SRC_FILES:.cpp=.d)
-include $(DEP_FILES)

all: $(OUTPUT)

$(OUTPUT): $(OBJ_FILES) Makefile
	$(CXX) $(OBJ_FILES) $(LDFLAGS) -o ./bin/$@

# specifies how the object files are compiled from cpp files
.cpp.o:
	$(CXX) -MMD -MP -c $(CXX_FLAGS) $(INCLUDES) $< -o $@

# typing 'make clean' will remove all intermediate build files
clean:
	rm -f $(OBJ_FILES) $(DEP_FILES) ./bin/$(OUTPUT)

# typing 'make run' will compile and run the program
run: $(OUTPUT)
	cd bin && ./$(OUTPUT) && cd ..
