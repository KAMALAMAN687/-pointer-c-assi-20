#include<stdio.h>
int main()
{
    printf("how many numbers you want to enter \n");
    int a;
    scanf("%d",&a);
    int i,b[a];
    printf("enter numbers: \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    reverse(&b,a);

}
void reverse(int *c,int size)
{
    int i;
    printf("reverse string is: ");
    for(i=size-1;i>=0;i--)
    {
        printf(" %d ",*(c+i));
    }

}