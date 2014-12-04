#include <stdio.h>

int i = 5;//Visible to whole program via 'extern'
static int j = 5; // Visible only within file

int function1 (int bar)
{
   //Visible to whole program
   //via function decleration
}

static int function2 (int stuff)
{
   //Visible only within file
}
