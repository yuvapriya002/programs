#include<stdio.h>
int main(){
    int num,r,reverse=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num)
    {
         r=num%10;
         reverse=reverse*10+r;
         num=num/10;
    }
    printf("Reversed of number: %d",reverse);
    return 0;
}
