#include<stdio.h>
void circular_shift(int *, int *, int *);
int main()
{
    int x = 5, y = 8, z = 10;
    int *a = &x;
    int *b = &y;
    int *c = &z;
    circular_shift(&x, &y, &z);
    printf("a = %d\nb = %d\nc = %d", *a, *b, *c);
    return 0;
}
void circular_shift(int *a, int *b, int *c){
    int t;
    t = *a;
    *a = *c;
    *c = *b;
    *b = t;
}