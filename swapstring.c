#include<stdio.h>
void swap(char**,char**);
int main()
{
char *a[20],*b[20];
printf("enter two strings: ");
fgets(a,20,stdin);
fgets(b,20,stdin);
swap(&a,&b);
printf("%s\n",a);
printf("%s",b);
return 0;


}
void swap(char **q, char **w)
{
   char *p;
   p=*q;
   *q=*w;
   *w=p;

}