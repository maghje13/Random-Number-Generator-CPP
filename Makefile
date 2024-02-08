all: install

install: main.cpp
	@echo "Compiling..."
	@g++ main.cpp -o main
	@echo "Done!"
