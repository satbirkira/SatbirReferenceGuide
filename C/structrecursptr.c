#include <stdio.h>
#include <stdlib.h>

// Define a new type of variable
// the 'Card'
typedef struct cardstructure* Card;

struct cardstructure 
{
   int n;
   int secret;
   Card nextCard;//Recursive Definition
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
   theNewCard->nextCard = NULL;//Give new card null
   return theNewCard;
}


int main (void)
{
   Card cardA = CreateNewCard(5);
   printf("The cardA as a pointer struct has a n value of %d\n", cardA->n);
   printf("The cardA as a pointer struct has a secret of %d\n", cardA->secret);
   printf("The cardA as a pointer struct has nextCard of %d\n", cardA->nextCard);
   printf("We will now link structure two cards!\n");
   Card cardB = CreateNewCard(5);
   cardB->nextCard = cardA;
   printf("The cardB as a pointer struct has a n value of %d\n", cardB->n);
   printf("The cardB as a pointer struct has a secret of %d\n", cardB->secret);
   printf("The cardB's nextCard which is cardA has n value of %d\n", cardB->nextCard->n);
   printf("The cardB's nextCard which is cardA has secret value of %d\n", cardB->nextCard->secret);
   printf("The cardB's nextCard which is cardA has nextCard of %d\n", cardB->nextCard->nextCard);
   
   free(cardA->nextCard);//Free cardA Recursive Pointer
   free(cardA);//Free cardA Head Pointer
   free(cardB);//Free Second Seperate Card
   return 0;

}
