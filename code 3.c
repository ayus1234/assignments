//Program to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
        sum=sum+2*i+1;
    printf("%d",sum);
    getch();
}