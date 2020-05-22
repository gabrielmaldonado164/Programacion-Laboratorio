#include <stdio.h>
#include <stdlib.h>
void swap(int*, int*);
int main()
{
    int a = 10;
    int b = 7;

    swap(&a, &b);
    printf("a: %d - b: %d", a, b);

    return 0;
}
void swap(int* p, int* q)
{
    int c;

     c = *p;
    *p = *q;
    *q = c;
}
