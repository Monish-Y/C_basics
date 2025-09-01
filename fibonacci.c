// Fibonacci Series of first N terms
#include<stdio.h>
void fibo(int n)
{
    if(n<=0)
    {
        printf("The value of \'N\' cannot be negative\n");
        return;
    }
    else if(n==1)
    {
        printf("%d\n",0);
        return;
    }
    else if(n==2)
    {
        printf("%d %d\n",0,1);
        return;
    }
    else{
        int n1,n2,n3;
        n1 = 0;
        n2 = 1;
        printf("%d ",n1);
        printf("%d ",n2);
        for(int i=3;i<=n;i++)
        {
            n3 = n1+n2;
            printf("%d ",n3);
            n1 = n2;
            n2 = n3;
        }
    }
}
int main()
{
    int N;
    printf("Enter the value of \'N\': ");
    scanf("%d",&N);
    fibo(N);
    return 0;
}