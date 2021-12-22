#include <stdio.h>
void main()
{
int n, i;
int r, rev = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n != 0)
{
r = n % 10;
printf("%d",r);
n /= 10;
}

}
