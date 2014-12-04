#include <stdio.h>
#include <stdlib.h>

//Define a new type of variable
//the Card
typedef struct
{
   int n;
   int secret;
}Card;

//Function creates card, gives it 
//desired values and returns it.
Card newCard (int number)
{
   Card c;
   c.n = number;
   c.secret = 1 + (rand() % number);
   return c;
}


int main (void)
{
   //Create a card called bluecard;
   Card bluecard = newCard(10);
   
   printf("I made a card! Its n is %d and its secret is %d\n", bluecard.n, bluecard.secret);
   return 0;

}
