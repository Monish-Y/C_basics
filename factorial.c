// Factorial of a number
#include <stdio.h>
int fact(int num);
int main()
{
    int val,fact_val=0;
    printf("Enter the number: ");
    scanf("%d",&val);
    fact_val = fact(val);
    printf("Factorial of %d is %d",val,fact_val);
    return 0;
}
int fact(int num)
{
    if(num<0)
    {
        return -1;
    }
    int fact_val = 1;
    while(num>1)
    {
        fact_val *= num;
        num--;
    }
    return fact_val;
}