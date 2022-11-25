#include<stdio.h>
void length(char **);
int main()
{
    char *a[20];
    gets(a);
    length(&a);
    return 0;
}
void length(char **p)
{
    int i;
    for(i=0;**(p+i);i++)
    {
        
    }
    printf("length of a string is %d",i-1);
}