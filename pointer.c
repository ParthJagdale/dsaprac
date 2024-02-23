#include<stdio.h>
int main()
{
    int i=3;
    printf("Address of is = %u\n",&i);
    printf("Value of address i is=%d",*(&i));
    printf("Value of i is =%d",i);
}