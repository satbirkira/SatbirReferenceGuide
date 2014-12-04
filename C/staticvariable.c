#include <stdio.h>


int addnum (int x)
{
   static int number = 0;
   number = number + x;
   return number;
}


int main (void)
{
   
   printf("Try to add 1 to number, it equals: %d\n",addnum(1));
   printf("Try to add 2 to number, it equals: %d\n",addnum(2));
   printf("Try to add 3 to number, it equals: %d\n",addnum(3));
   
   printf("\nNormally, this would return 1 2 3, but it now returns 1 3 6:\n");
   printf("This is because addnum keeps numbers value, not throwing it out\n");
   printf("after the returns. We can only change numbers value in addnum.\n");
   printf("Its scope stays in addnum.");
   
}
