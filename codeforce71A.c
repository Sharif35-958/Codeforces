#include<stdio.h>
int main()
{
    char s[100];
    int len,n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%s",s);

        len=strlen(s);

        if(len>10)
        {
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
        else
            printf("%s",s);
        printf("\n");


    }

    return 0;


}
