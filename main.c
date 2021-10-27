#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int a,b,c,d,e,f,g;

int sum(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int quotient(int x, int y);
int modulus(int x,int y);

int main()
{
    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);



    c= sum(a,b);
    printf("%d plus %d = %d\n", a,b,c);

    d= difference(a,b);
    printf("%d minus %d = %d\n", a,b,d);

    e= product(a,b);
    printf("%d times %d = %d\n", a,b,e);

    f= quotient(a,b);
    printf("%d divided by %d= %d\n", a,b,f);

    g=modulus(a,b);
    printf("%d reminder %d = %d\n", a,b,g);

    return 0;
}

int sum(int x, int y)
{
    return(x + y);
}
int difference(int x, int y)
{
    return(x - y);
}
int product(int x, int y)
{
    return (x * y);
}

int quotient(int x, int y)
{
    return(x / y);
}
int modulus(int x, int y)
{
    return(x % y);
}

