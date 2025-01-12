# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11 -D_REENTRANT

# SDL2 flags
SDL2_CFLAGS = $(shell sdl2-config --cflags)
SDL2_LDFLAGS = $(shell sdl2-config --libs)

# Source files
SRCS = sdl2_window.cpp

# Output executable
TARGET = sdl2_window

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SDL2_CFLAGS) -o $(TARGET) $(SRCS) $(SDL2_LDFLAGS)

# Clean target
clean:
	rm -f $(TARGET)
