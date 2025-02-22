SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# All files to be compiled
all: $(OBJECTS)

# Compile .cpp into .o then link the .o files together
# For Mac:
# gcc -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 -c $< -o $@
%.o: %.cpp
	gcc -c $< -o $@

# Delete all .o files
clean:
	rm -f $(OBJECTS)

.PHONY: all clean