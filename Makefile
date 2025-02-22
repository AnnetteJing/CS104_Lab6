SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# All files to be compiled
all: $(OBJECTS)

# Compile .cpp into .o then link the .o files together
%.o: %.cpp
	gcc -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 -c $< -o $@

# Delete all .o files
clean:
	rm -f $(OBJECTS)

.PHONY: all clean