PROJECT_NAME = PROCESS_MINISHELL

SRC = src/minishell.c\
src/main.c


INC = -Iinc

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ $(INC)

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
