#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // int r = 2;
    // int c = 1;

    // for(int i=0; i<9; i++) {
    //     int r1 = (r/3)*3 + i/3;
    //     int c1 = (c/3)*3 + i%3;
    //     printf("i=%d, (%d, %d)=(%d+%d, %d+%d)", i, r1, c1, ((r/3)*3), (i/3), ((c/3)*3), (i%3));
    //     printf("\n");
    // }

    int *p1[4] = {1, 2, 3, 4};
	printf("%d\n", *p1);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c\n", *(p1 + i));
    //     printf("%c\n", p1[i]);
    // }
    
    // for (int i = 0; i < 4; i++) 
    // {
	//     printf("%d\n", *(p1 + i));
	//     printf("%d\n", p1[i]);
    // }

    //int(*p2)[4] = &p1;

    // for (int i = 0; i < 4; i++) 
    // { 
    //     printf("%d\n", *(*p2 + i));
    //     printf("%d\n", **(p2 + i));//错误！！！增加指针类型大小的字节
    // }

    return 0;
}