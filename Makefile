.PHONY = clean
CXXFLAGS = -O2 -g -Wall -fmessage-length=0 -Iinclude
CXX = g++
OBJS = src/tools/hint.o src/main.o src/tools/color.o

LIBS =

TARGET = main

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

src/tools/hint.o: src/tools/hint.cpp
	$(CXX) $(CXXFLAGS) -c src/tools/hint.cpp -o src/tools/hint.o

src/tools/color.o: src/tools/color.cpp
	$(CXX) $(CXXFLAGS) -c src/tools/color.cpp -o src/tools/color.o

src/main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o src/main.o

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
