
#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i=0,length;

    gets(str);

    length= strlen(str);

    for(i=0; i<length; i++)
    {
        if(isupper(str[i]))
            {
                tolower(str[i]);
            }
        if (str[i] != 'a' && str[i] != 'e' &&  str[i] != 'i' &&
                 str[i] !='o' && str[i] != 'u')
        {



            printf(".%c",str[i]);



        }



    }


}


