//Program to calculate sum of squares of first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        sum=sum+i*i;
    printf("%d",sum);
    getch();
}