CX=g++
CXFLAGS=-g -Wall
OBJECT=main.o code.o
TARGET=complex

$(TARGET):$(OBJECT)
	$(CX) -o $(TARGET) $(OBJECT)
main.o: main.cpp head.hpp
	$(CX) $(CXFLAGS) -c main.cpp
code.o: code.cpp head.hpp
	$(CX) $(CXFLAGS) -c code.cpp

.PHONY: clean 
clean : 
	rm $(TARGET) $(OBJECT)
