
#https://github.com/4wekromi

CC = g++
AA = ar
STD = c++11
CXX = TextParse.cpp
OBJS = TextParse.o
BIN = bin/libTextParse.a

all:
	$(CC) -Wall -c $(CXX) -std=$(STD)
	$(AA) -crvs $(BIN) $(OBJS)
