#include <stdio.h>
#include <math.h>
int main()
{
    float n, k;
    printf("Enter Range and position: ");
    scanf("%f %f", &n, &k);
    int result = (k <= ceil(n/2) ) ? (2 * k - 1) : (2 * (k- ceil(n/2)));
    printf("number: %d", result);
}
