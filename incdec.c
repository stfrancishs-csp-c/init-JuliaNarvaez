#include <stdio.h>
int main(void)
{
    int k=1;
    k++;
    printf ("%i\n", k);
    k+=1;
    printf ("%i\n", k);
    k=k+1;
    printf ("%i\n", k);

    k--;
    printf ("%i\n", k);
    k-=1;
    printf ("%i\n", k);
    k=k-1;
    printf ("%i\n", k);
}