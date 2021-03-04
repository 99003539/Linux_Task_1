
PROJECT_NAME = SS_task1

SRC = src/copyoprewrcl.c


$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ 

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
