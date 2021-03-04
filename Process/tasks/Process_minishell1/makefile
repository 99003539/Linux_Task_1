PROJECT_NAME = PROCESS_MINISHELL

SRC = src/minishell.c




$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ 

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
