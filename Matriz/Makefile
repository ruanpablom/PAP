CC = g++
CXXFLAGS = -W -Wall
EXE = Matriz
OBJ = Matriz.o

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CXXFLAGS) -o $(EXE)

Matriz.o: Matriz.cpp 
	$(CC) $(CXXFLAGS) Matriz.cpp

clean: rm $(OBJ) $(EXE)  		