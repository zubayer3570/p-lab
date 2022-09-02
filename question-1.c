#include <stdio.h>
int main()
{
    int n, k, result;
    printf("Enter Range and position: ");
    scanf("%d %d", &n, &k);
    result = (k <= n / 2) ? (2 * k - 1) : (2 * (k - n / 2));
    printf("number: %d", result);
}