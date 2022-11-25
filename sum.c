#include<stdio.h>
void sum(int *,int);
int main()
{
    printf("how many numbers you want to enter : \n");
    int b;
    scanf("%d",&b);
    int a[b],i;
    printf("enter numbers: \n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,b);
    return 0;
    
}
void sum(int *p,int size)
{
    int i,s=0;
    for(i=0;i<=size-1;i++)
    {
        s+=*(p+i);
    }
    printf("sum is %d",s);

}
