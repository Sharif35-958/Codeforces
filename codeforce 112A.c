#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int i,len;

    len=strlen(str1);

    for(i=0;i<len;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
        if(str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=str2[i]+32;
        }


        if(str1[i]>str2[i])
        {
            printf("1");
            break;
        }
        else if(str1[i]<str2[i])
        {
            printf("-1");
            break;
        }
        else
        {
            printf("0");
            break;
        }
    }

    return 0;
}
