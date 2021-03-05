all: Act8write Act8read

Act8write: Act8write.c 
	gcc -o Act8write.out Act8write.c -lpthread -lrt
	
Act8read: Act8read.c 
	gcc -o Act8read.out Act8read.c -lpthread -lrt
	
 runAct8read:
	./Act8read.out

runAct8write:
	./Act8write.out

clean:
	rm -rf *.out *.o