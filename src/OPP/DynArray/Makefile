CC = g++
FLAGS = -Wall
STD_LANG = -std=c++17
TEST_EXEC = dynarrtest

all:
	$(CC) $(FLAGS) $(STD_LANG) -o $(TEST_EXEC) *.cpp

test:
	make && "./$(TEST_EXEC)"
