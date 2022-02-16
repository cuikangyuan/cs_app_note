#include<stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <stdlib.h>
/* 
 * mmapcopy - uses mmap to copy file fd to stdout 
 */
void mmapcopy(int fd, int size) 
{
    char *bufp; /* ptr to memory-mapped VM area */

    bufp = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    int res = write(1, bufp, size);
    //int res = write(fd, bufp, 1);
    printf("\nwrite res = %d\n", res);
    return;
}

/* mmapcopy driver */
int main(int argc, char **argv) 
{
    struct stat stat;
    int fd;

    /* Check for required command-line argument */
    if (argc != 2) {
	    printf("usage: %s <filename>\n", argv[0]);
	    exit(0);
    }

    /* Copy the input argument to stdout */
    fd = open(argv[1], 0, 0);
    fstat(fd, &stat);
    mmapcopy(fd, stat.st_size);
    exit(0);
}
/* $end mmapcopy */