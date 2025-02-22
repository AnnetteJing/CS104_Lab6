SOURCES_CPP = $(wildcard *.cpp)
SOURCES_C = $(wildcard *.c)
OBJECTS_CPP = $(SOURCES_CPP:.cpp=.o)
OBJECTS_C = $(SOURCES_C:.c=.o)
OBJECTS = $(OBJECTS_CPP) $(OBJECTS_C)
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

%.o: %.c
	g++ -c $< -o $@ -L/usr/local/Cellar/libmagic/5.46/lib -lmagic

# Link .o files to executable calculator
$(EXECUTABLE): $(OBJECTS)
	g++ $^ -o $@ -L/usr/local/Cellar/libmagic/5.46/lib -lmagic

# Delete all .o files
clean:
	rm -f $(OBJECTS)

.PHONY: all clean