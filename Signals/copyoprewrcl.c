//#include "copyoprewrcl.h"
#include <unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

int main(){

bool copyfile()
{
	int fd,fd1,nbytes, flag;
	fd=open("A1.txt",O_RDONLY);
	fd1=open("A2.txt",O_WRONLY|O_CREAT, 0666);
	if(fd<0 || fd1<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=128;
	char buf[maxlen];
	nbytes=read(fd,buf,maxlen);
	if(nbytes<0)
	{
		perror("read");
		exit(2);
	}
	flag = write(fd1,buf,nbytes);
	close(fd);
	close(fd1);
	if(flag>=1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
}
