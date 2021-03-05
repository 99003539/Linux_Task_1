all: Act2Gpipe Act2Gpipe1 Act2Gpipe2

Act2Gpipe: Act2Gpipe.c Act2g.h
	gcc -o Act2Gpipe.out Act2Gpipe.c -lrt
	
Act2Gpipe1: Act2Gpipe1.c Act2g.h
	gcc -o Act2Gpipe1.out Act2Gpipe1.c -lrt

Act2Gpipe2: Act2Gpipe2.c Act2g.h
	gcc -o Act2Gpipe2.out Act2Gpipe2.c -lrt
	
runAct2Gpipe:
	./Act2Gpipe.out

runAct2Gpipe1:
	./Act2Gpipe1.out

runAct2Gpipe2:
	./Act2Gpipe2.out

clean:
	rm -rf *.out *.o