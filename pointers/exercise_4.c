#include<stdio.h>
int main()
{
    float p = 23.24;
    float *q, **r;
    q = &p;
    r = &q;
    printf("%f %f\n", *q, **r);
    return 0;
}