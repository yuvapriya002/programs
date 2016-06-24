#include<stdio.h>
void main()
{
int sum=0,n,i,b;
printf("How many numbers do you want to add?\n");
scanf("%d",&n);
printf("Enter those %d numbers\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&b);
sum=sum+b;
}
printf("Sum of all the numbers you entered is %d",sum);
getch();
}
