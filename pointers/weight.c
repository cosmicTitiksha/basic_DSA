#include<stdio.h>
void weight_conv(float, float *, float *, float *);
int main()
{
    float kg, g, pounds, tons;
    printf("Enter the weight in kg : ");
    scanf("%f", &kg);
    weight_conv(kg, &g, &pounds, &tons);
    printf("%f kg = %f g.\n",kg, g);
    printf("%f kg = %f pounds.\n", kg, pounds);
    printf("%f kg = %f tons.\n", kg, tons);
    return 0;
}
void weight_conv(float kg, float *g, float *pounds, float *tons){
    *g = kg * 1000;
    *pounds = kg * 2.20462;
    *tons = kg * 0.001;//metric tonne
}
