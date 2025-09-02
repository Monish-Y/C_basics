// Reverse of the string using pointer
#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    printf("Enter the string: ");
    scanf("%s",str);
    char *start, *end;
    start = str;
    end = start+strlen(str);
    end--;
    printf("%c",*start);
    printf("%c",*end);
    while(start<end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("The Reverse String is %s \n",str);
    return 0;
}