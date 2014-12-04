#include <stdio.h>

int main (void)
{
   int number=0;
   while (number!=-1)//Loop forever
   {
      printf("Enter a number:");
      scanf("%d",&number);
      printf("The number is:%d\n",number);
      printf("The number is held in the adress:%p\n",&number);
      //Use pointer
      printf("We will now create a pointer type that holds &number\n");
      printf(">int* ptr = &number;\n");
      int* ptr = &number;
      printf("The adress held in the pointer is:%p, where the pointer points to.\n",ptr);
      printf("Derefrencing the pointer, the value of the number is:%d\n",*ptr);
      printf("Where the pointer is being held in memory is:%p\n",&ptr);
      //Change value by derefrencing
      printf("We will now change numbers value by changing the pointers\n");
      printf("derefrenced value.\n");
      printf(">*ptr=20;\n");
      *ptr=20;
      printf("The original number is now changes to: %d\n",number);
      printf("Derefrencing the pointer, the value of the number is now: %d\n",*ptr);
      
   }
}
