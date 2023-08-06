#include <stdio.h>
#include <stdlib.h>

int main()
/*{
int a;
int product=1;
 printf("Pls enter a number:");
 scanf("%d",&a);
 while (a>=1)
 {
    product=product*a;
    a=a-1;
 }
 printf("%d",product);
    return 0;
}
*/
{
int a;
int product=1;
 printf("Pls enter a number:");
 scanf("%d",&a);
 for (;a>=1;a=a-1)
    product=product*a;

 printf("%d",product);
    return 0;
}
