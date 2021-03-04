PROJECT_NAME = SS_TASK3

SRC = src/sig.c\
src/main.c


INC = -Iinc

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ $(INC)

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
