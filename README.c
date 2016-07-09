#include <stdio.h>
void main()
{
   int m,n,o;

    printf("Enter three numbers ");
    scanf("%d %d %d", &m, &n, &o);

    if( m>=n && m>=o )
        printf("%d is the largest number", m);

    if( n>=m && n>=o )
        printf("%d is the largest number", n);

    if( o>=m && o>=n)
        printf("%d is the largest number", o);
}
