TARGET = SC-Lyoko
CC = clang++
STD = -std=c++17
EXT_LIB = -lsfml-graphics -lsfml-window -lsfml-system


SRC = $(wildcard $(DIR_SRC)*.c)
OBJ = $(patsubst $(DIR_SRC)%.c, $(DIR_OBJ)%.o, $(SRC))

$(DIR_OBJ)%.o : $(DIR_SRC)%.c
	$(CC) $(STD) -c $< -o $@ -g


clean :
	rm $(TARGET) $(DIR_OBJ)*.o
CC = clang++
CFLG = -c -g
LDFLG= -lsfml-graphics -lsfml-window -lsfml-system

DIR_SRC = ./src/
DIR_OBJ = ./obj/

SRC = main.cpp App.cpp Button.cpp Base.cpp Menu.cpp Layout.cpp Scene.cpp 
OBJ = $(SRC:.cpp=.o)
EXE = hello

all: $(SRC) $(EXE)
	
$(EXE): $(OBJ) 
	$(CC) $(LDFLG) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLG) $< -o $@
