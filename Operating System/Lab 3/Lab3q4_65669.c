#include <stdio.h>
#include <stdlib.h>

void endprog(int summary, float average)
{
    printf("sum is %d\n", summary);
    printf("avg is %.2f\n", average);
    exit(1);
}

int main(void)
{
    int x, sum;
    char    *s;

    x = 0;
    sum = 0;

    while (1)
    {
        printf("Enter a number : ");
        s = malloc(10);
        scanf("%s", s);
        if (s[0] == '0' || s[0] == '-')
        {
            endprog(sum, (float)sum / x);
        }
        sum += atoi(s);
        x++;
    }
    return (0);
}