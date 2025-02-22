SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = Calculator

# Target
all: $(EXECUTABLE)

# Compile .cpp into .o then link the .o files together
# For Linux:
# gcc -c $< -o $@
# For Mac:
# gcc -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 -c $< -o $@
%.o: %.cpp
	gcc -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 -c $< -o $@

# Link .o files to executable calculator
$(EXECUTABLE): $(OBJECTS)
	g++ $^ -o $@

# Delete all .o files
clean:
	rm -f $(OBJECTS)

.PHONY: all clean