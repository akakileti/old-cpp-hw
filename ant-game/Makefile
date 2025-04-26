# Makefile for Ant Game
# Anusha Kakileti
# CSCE1030 - Ant Game Project
# Description: Compiles, runs, and cleans files for the Ant Game assignment.

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -std=c++11

# Executable name
TARGET = antgame

# Source and header files
SRC = ak0896HW4main.cpp ak0896HW4func.cpp
HEADERS = ak0896HW4.h
OBJS = $(SRC:.cpp=.o)

# Default target to build the program
all: $(TARGET)

# Link object files into final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile .cpp files into .o files, checking headers
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Build and immediately run the program
run: $(TARGET)
	./$(TARGET)

# Remove all compiled files
clean:
	rm -f $(TARGET) $(OBJS)
