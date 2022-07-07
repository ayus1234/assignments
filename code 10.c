//Program to reverse a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,reverse;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(reverse=0;N!=0;reverse++)
    {
        reverse=N%10;
        printf("%d",reverse);
        N=N/10;
    }
    getch();
}