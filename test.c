#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int r = 2;
    int c = 1;

    for(int i=0; i<9; i++) {
        int r1 = (r/3)*3 + i/3;
        int c1 = (c/3)*3 + i%3;
        printf("i=%d, (%d, %d)=(%d+%d, %d+%d)", i, r1, c1, ((r/3)*3), (i/3), ((c/3)*3), (i%3));
        printf("\n");
    }
}