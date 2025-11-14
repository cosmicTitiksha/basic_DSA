#include<stdio.h>
int main(){
    float i;
    float *j;
    float **k;
    j = &i;
    k = &j;
    printf("Enter some float value : ");
    scanf("%f", &i);
    printf("Values in :\ni = %f, j = %p, k = %p\n", i, j, k);
    printf("Memory address of :\ni = %p, j = %p, k = %p", &i, &j, &k);
    return 0;
}