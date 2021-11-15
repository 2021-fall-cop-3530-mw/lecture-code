CXX = g++
CXXFLAGS = -Wall -g
test-heap: test/test-heap.cpp ../catch/catch.o heap.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success