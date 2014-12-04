#include <stdio.h>
#include <stdlib.h>

// Define a new type of variable
// the 'Card'
typedef struct cardstructure* Card;

struct cardstructure 
{
   int n;
   int secret;
};

Card CreateNewCard (int number)
{
   //Enough memory for one card, please
   Card theNewCard = malloc(sizeof(struct cardstructure));
   if (theNewCard == NULL)
   {
      exit(-1);
   }
   
   //theNewcard->n is short for (*theNewCard).n
   theNewCard->n = number;
   theNewCard->secret = 1 + (rand() % number);
   return theNewCard;
}


int main (void)
{
   Card simplecard = CreateNewCard(5);
   printf("The simeplcard as a pointer struct has a n value of %d\n", simplecard->n);
   printf("The simeplcard as a pointer struct has a secret of %d\n", simplecard->secret);
   free(simplecard);
   return 0;

}
