// Vowels and Consonent Counting in the string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[15],vowel_cnt=0,consonent_cnt=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                vowel_cnt++;
            }
            else{
                consonent_cnt++;
            }
        }
    }
    printf("Count of Vowels: %d \n",vowel_cnt);
    printf("Count of Consonents: %d \n",consonent_cnt);
    return 0;
}