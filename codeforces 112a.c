#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int ret,i;

int    len=strlen(str1);

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
    }

    ret= strcmp(str1,str2);

    if(ret>0)
    {
        printf("1\n");
    }
    else if(ret<0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;

}
