#include <stdio.h>

int Jump (int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    else
        return Jump(x - 1) + Jump(x - 2);
}

int main()
{
    int n = 0;
    printf("in:\n");
    scanf("%d", &n);
    int ret = Jump(n);
    printf("%d\n", ret);
    return 0;
}









