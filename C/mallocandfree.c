//Declaration of malloc and free are in stdlib.h
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
   //Declare a pointer to hold an adress
   int *ptr;
   
   //Request address where there's room to store an int
   //as a pointer. It poist to open space in memory.
   ptr = malloc(sizeof(int));
   
   if (ptr == NULL)
   {  
      printf("Didn't get requested memort");
      exit(-1);   
   }
   
   //Do something with memort
   *ptr = 7;
   printf("The value of my pointer is: %p\n", ptr);
   printf("The value pointed to is: %d\n", *ptr);
   
   //Okay I am done with the memory, give it back
   free(ptr);
   
}
