#include <stdio.h>
int main()
{
    int n1, n2, i, flag;
    printf("Enter two numbers(intevals): ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    while (n1 < n2)
    {
        flag=0;
        for(i=2; i<=n1/2; ++i)
        {
            if(n1%i == 0)
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ",n1);
        ++n1;
    }
    return 0;
}
