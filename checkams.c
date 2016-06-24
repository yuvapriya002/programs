#include <stdio.h>
int main()
{
    int n, orig, r, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &);
    orig=n;
    while (orig!=0)
    {
        r= orig%10;
        result += r*r*r;
        orig/= 10;
    }
   if(result == number)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
