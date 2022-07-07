//Program to count digits in a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,count;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(count=0;N!=0;count++)
        N=N/10;
    printf("Total Digits = %d",count);
    getch();
}