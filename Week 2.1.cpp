#include <stdio.h>
#include <string.h>
int main() 
{
   int num,i;
   int sum=0;
   scanf("%d", &num);
   for (i = 1;i<=num;i++)
   {
        sum = sum +i;
   }
   printf("%d", sum);
    return 0;
}
