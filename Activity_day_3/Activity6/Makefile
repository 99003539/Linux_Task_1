all: Act6server Act6client

Act6server: Act6server.c 
	gcc -o Act6server.out Act6server.c -lrt
	
Act6client: Act6client.c 
	gcc -o Act6client.out Act6client.c -lrt
	
runAct6client:
	Act6client.out

runAct6server:
	./Act6.out

clean:
	rm -rf *.out *.o