//Program to check whether a given number is a Prime number or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter any number\n");
    scanf("%d",&N);
    for(i=2;i<=N-1;i++)
    {
        if(N%i==0)
        break;
    }
    if(N==i)
    printf("%d is a prime number",N);
    else
    printf("%d is not a prime number",N);
}