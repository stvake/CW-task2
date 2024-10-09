CC = g++
CFLAGS = -Wall
OBJ = task2.o calculator.o
TARGET = task2
LIBRARY = libCalculator.a

.PHONY: all clean

all: $(TARGET) $(LIBRARY)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

$(LIBRARY): calculator.o
	ar -rcs $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET) $(LIBRARY)
