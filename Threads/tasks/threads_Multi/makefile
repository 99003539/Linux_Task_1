PROJECT_NAME = THREADS_MULTI

SRC = src/multithread.c



$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ 
run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
