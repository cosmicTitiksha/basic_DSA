#include<stdio.h>
#include<math.h>
void power_fact(float, int, float *, int, int *);
int main()
{
    int num2, num, factorial_val;
    float num1, pow_ans;
    printf("Enter values of two numbers a and b such that a^b : ");
    scanf("%f %d", &num1, &num2);
    printf("Enter the number to find factorial of : ");
    scanf("%d", &num);
    power_fact(num1, num2, &pow_ans, num, &factorial_val);
    printf("Power of %f raise to %d is %f\n", num1, num2, pow_ans);
    printf("Factorial of %d is %d\n", num, factorial_val);
    return 0;
}
void power_fact(float num1, int num2, float *pow_ans, int num, int *factorial_val){
    *pow_ans = pow(num1, num2);

    int i, res = 1;
    for(i = 1; i <= num; i++)
        res = res * i;
    *factorial_val = res;

}