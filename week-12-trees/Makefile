CXX = g++
CXXFLAGS = -Wall
test-node: test/test-node.cpp ../catch/catch.o node.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success

test-tree: test/test-tree.cpp ../catch/catch.o node.o tree.o
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success