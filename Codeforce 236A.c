#include<stdio.h>
#include<string.h>
void sorting(char str[101],int length)
{
    int i,j;
    char temp;
    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }
}
void upptolow(char str[101], int length)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(str[i]>= 'A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
}
int main()
{
    char str[101];
    int i,length,count=1;

    scanf("%s",&str);


    length= strlen(str);

    upptolow(str,length);

    sorting(str,length);

    for(i=0; i<length-1; i++)
    {
        for(int j=1; j<length; j++)
        {

            if(str[i]!= str[j])
            {
                count++;

                break;
            }
            else
                i++;
                break;
        }

    }
    printf("%d",count);
    if(count%2==1)
    {
        printf("IGNORE HIM!");

    }

    else

        printf("CHAT WITH HER!");
    return 0;
}
