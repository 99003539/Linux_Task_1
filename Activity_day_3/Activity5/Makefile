all: Act2Eser Act2Ecli

Act2Eser: Act2Eser.c sol2e.h
	gcc -o Act2Eser.out Act2Eser.c -lrt
	
assignment2Ecli: assignment2Ecli.c sol2e.h
	gcc -o Act2Ecli.out Act2Ecli.c -lrt
	
runAct2Ecli:
	./Act2Ecli.out

runassignment2Eser:
	./Act2Eser.out

clean:
	rm -rf *.out *.o