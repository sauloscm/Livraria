# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra

# Source files
SRCS := main.cpp livraria.cpp livro.cpp menu.cpp

# Object files
OBJS := $(SRCS:.cpp=.o)

# Executable name
EXEC := livraria

# Targets
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean

