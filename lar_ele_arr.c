// Largest Element of the Array
#include <stdio.h>
int main()
{
    int arr[] = {1,5,2,10,6,3,4,7,15,11};
    int lar_ele = arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i]>lar_ele)
        {
            lar_ele = arr[i];
        }
    }
    printf("The Largest element of the array is %d \n",lar_ele);
    return 0;
}