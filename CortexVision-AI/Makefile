CXX = g++
CC = gcc

CXXFLAGS = -std=c++11
CFLAGS = -c

all: cortexvision

cortexvision: main.o image_processor.o hardware.o
	$(CXX) main.o image_processor.o hardware.o -o cortexvision

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp

image_processor.o: src/image_processor.cpp
	$(CXX) $(CXXFLAGS) -c src/image_processor.cpp

hardware.o: src/hardware.c
	$(CC) $(CFLAGS) src/hardware.c

clean:
	rm -f *.o cortexvision

