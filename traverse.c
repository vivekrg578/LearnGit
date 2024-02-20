#include<stdio.h>
int main()
{
    char string[]="Jaguar";
    char *ptr=string;
    int i=0;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    printf("\nLength:%d",i);
    return 0;
}