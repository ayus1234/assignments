//Program to calculate factorial of a number

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
        fact=fact*i;
    printf("%d",fact);
    getch();
}