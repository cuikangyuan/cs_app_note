#include<stdio.h>
#include<elf.h>

unsigned long long data1 = 0xd1d1d1d1d1d1d1d1;
unsigned long long data2 = 0xd2d2d2d2d2d2d2d2;
void func1() {};
void func2() {};


int main() {
    Elf64_Sym sym;
    printf("%ld \n", sizeof(sym));
    return 0;
}
