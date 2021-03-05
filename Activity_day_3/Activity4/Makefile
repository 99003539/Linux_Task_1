all: Activity4send Activity4receive

sol4send: sol4send.c 
	gcc -o Activity4send.out Activity4send.c -lrt
	
sol4receive: sol4receive.c 
	gcc -o Activity4receive.out Activity4receive.c -lrt
	
runsol4receive:
	./Activity4receive.out

runsol4send:
	./Activity4send.out

clean:
	rm -rf *.out *.o