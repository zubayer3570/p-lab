#include <stdio.h>
int main()
{
    int teddy, eddy, years = 0;
    printf("Enter Teddy's and Eddy's Weight respectively: ");
    scanf("%d %d", &teddy, &eddy);
    while (teddy <= eddy)
    {
        teddy *= 3;
        eddy *= 2;
        ++years;
    }
    printf("Years: %d", years);
}