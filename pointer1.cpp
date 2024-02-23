#include<stdio.h>
#include<conio.h>
int main()
{
    int i=3;
    int *j;

    j=&i;
    

printf("The value of i =%d",i);
printf("Adress of i is =%d",j);
printf("Adress of j is =%d",&j);
printf("Value of j is= %d",*(&j));
    printf("Vale of i is =%d",*(&i));
}
