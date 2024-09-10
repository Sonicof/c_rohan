#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
void main()
{
	char buff;
	int fd,fd1;
	fd=open("1.txt",O_RDONLY);
	fd1=open("2.txt",O_WRONLY|O_CREAT);
	while(read(fd,&buff,1))
	write(fd1,&buff,1);
	printf("Succcess\n");
	close(fd);
	close(fd1);
}
