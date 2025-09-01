// Reverse a number
#include <stdio.h>
int main()
{
    int num,num_cpy, rev_num=0, temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    num_cpy = num;
    while(num>0)
    {
        temp = num%10;
        rev_num = rev_num*10 + temp;
        num/=10;
    }
    printf("Reverse of %d is %d \n",num_cpy,rev_num);
    return 0;
}