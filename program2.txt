 #include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
int fd1;
char * fifo_one = "/tmp/fifo_one";
mkfifo(fifo_one, 0666);
char buffer[80];

fd1 = open(fifo_one, O_WRONLY);
printf("Saqlain Nasir mc200204513\n");
write(fd1, buffer, sizeof(buffer)); 
closed(fd1);

}