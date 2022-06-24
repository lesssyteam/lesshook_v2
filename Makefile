CXX = g++
CXXFLAGS = -std=c++14 -fPIC -I./include
LDFLAGS = -shared -ldl -lSDL2

SOURCES=$(shell find Project/ -type f -iname '*.cpp')
OBJECTS=$(SOURCES:.cpp=.o)
OUT := Build/lesshook.so

32bit_flags:
	$(eval CXXFLAGS += -m32)
	$(eval LDFLAGS += -m32)

x86: clean 32bit_flags build

clean:
	rm -vf $(OBJECTS) .o

%.o: ../%.cc
	$(CXX) $(CXXFLAGS) -o "$@" "$<"

build: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(OUT) $(LDFLAGS)