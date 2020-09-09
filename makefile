hepsi: derle calistir
Nesneler :=  ./lib/BST.o ./lib/BSTNode.o ./lib/FileManager.o ./lib/Stack.o ./lib/StackNode.o ./lib/User.o
derle:
	g++ -I ./include/ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -I ./include/ -o ./lib/BSTNode.o -c ./src/BSTNode.cpp
	g++ -I ./include/ -o ./lib/FileManager.o -c ./src/FileManager.cpp
	g++ -I ./include/ -o ./lib/Stack.o -c ./src/Stack.cpp
	g++ -I ./include/ -o ./lib/StackNode.o -c ./src/StackNode.cpp
	g++ -I ./include/ -o ./lib/User.o -c ./src/User.cpp

	g++ -I ./include/ -o ./bin/Test $(Nesneler) ./src/Main.cpp
calistir:
	./bin/test