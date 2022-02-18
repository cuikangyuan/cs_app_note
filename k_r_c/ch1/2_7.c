#include <stdio.h>

int atoi(char s[])
{
    int i, n;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = n * 10 + (s[i] - '0');
    }
    return n;
}

int lower(int i)
{
    if (i >= 'A' && i <= 'Z')
    {
        return i + ('a' - 'A');
    }
    else
    {
        return i;
    }
    

}

int main() 
{

    int res = lower('A');
    printf("%d %c\n", res, res);

    //promote
    int c1 = -1L < 1U; //unsigned int promoted to signed long
    int c2 = -1L < 1UL; // signed long promoted to unsigned long
    printf("c1 = %d, c2 = %d\n", c1, c2);

    return 0;
}

