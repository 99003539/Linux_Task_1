PROJECT_NAME = THREAD_TIME

SRC = src/time.c

INC = -Iinc

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ $(INC)

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
