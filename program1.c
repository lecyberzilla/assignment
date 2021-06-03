#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <unistd.h>
 
int main()
{
int fd; 
char * fifo_one = "/tmp/fifo_one";
mkfifo(fifo_one, 0666);
char buffer[80];
 
fd = open(fifo_one, O_RDONLY);
read(fd, buffer, sizeof(buffer));

closed(fd); 

}