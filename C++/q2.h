// 2. Make a class with int number and string word, manipulate it with main. 
// Add operator that adds two of these structures, appends the strings and adds the ints. Do the
// same, but have them as methods instead of operators.
// When using <<, we must say "The number is " number ". The string is" string.
// Add a function that gets the number and one that gets the word. 
// The member functions must be the only ones able to access the data, 
// as in, the number and word are private data.
#include <iostream>
#include <string>

using namespace std;

//put headers?

class dictionary
{
	public:
	//constructors
	dictionary();
	dictionary(int numberGiven, string wordGiven);
	dictionary(int numberGiven, string wordGiven, int* pGiven);
	
	//ask kawsic about copycat constructor
	//to make copy cat, make this function
	//dictionary(const dictionary& bookToCopyFrom);
	
	//accesors
	int getNumber();
	string getWord();
	int getPointerDereference();
	
	//input and output
	//want operators to access privates directory of the books, make it a friend and put it
	//right in the class
	friend ostream& operator <<(ostream& outputStreamGiven, const dictionary& bookGiven);
	friend istream& operator >>(istream& inputStreamGiven, dictionary& bookGiven);
	const friend dictionary operator +(const dictionary& bookOne, const dictionary& bookTwo);
	
	
	private:
	
	int number;
	string word;
	int* p;
};



int main ()
{

	int* p = new int;
	*p = 5;

	dictionary bookBlue, bookGreen(2, "green"), bookRed(3, "red", p);
	
	//cout them all
	cout << bookBlue << bookGreen << bookRed << endl;
	
	//add two
	bookGreen = bookGreen + bookRed;
	cout << bookGreen.getWord() << endl;
	
	//take in and print out orange
	dictionary bookOrange;
	
	cin >> bookOrange;
	cout << bookOrange << endl;
	
}

dictionary::dictionary()
: number(0), word(""), p(new int)
{
}

dictionary::dictionary(int numberGiven, string wordGiven)
: number(numberGiven), word(wordGiven), p(new int)
{
}

dictionary::dictionary(int numberGiven, string wordGiven, int* pGiven)
: number(numberGiven), word(wordGiven), p(pGiven)
{
}

int dictionary::getNumber()
{
	return number;
}

string dictionary::getWord()
{
	return word;
}

int dictionary::getPointerDereference()
{
	return *p;
}






const dictionary operator +(const dictionary& bookOne, const dictionary& bookTwo)
{
	//return anon object, the second pointer is always ignored
	return dictionary(bookOne.number + bookTwo.number, bookOne.word + bookTwo.word, bookOne.p);
	//or use bookOne.getNumber() and bookOne.getWord() and bookOne.getPointerDereference() but
	//since we made the operator a friend function, we don't need accesors
}

ostream& operator <<(ostream& outputStreamGiven, const dictionary& rightSideBook)
{
	outputStreamGiven << "The number is: " << rightSideBook.number << ". The word is: " << rightSideBook.word << "."
	<< " The pointer holds a integer value of: " << *rightSideBook.p << ". ";
	return outputStreamGiven;
}

istream& operator >>(istream& inputStreamGiven, dictionary& rightSideBook)
{
	inputStreamGiven >> rightSideBook.number; //i can access the private directly because im a friend function
	inputStreamGiven >> rightSideBook.word;
	inputStreamGiven >> *rightSideBook.p;
	return inputStreamGiven;
}

//output
// The number is: 0. The word is: . The pointer holds a integer value of: 0.  //bookBlue
// The number is: 2. The word is: green. The pointer holds a integer value of: 0.  //bookGreen
// The number is: 3. The word is: red. The pointer holds a integer value of: 5. //bookRed
// greenred // bookGreens word
// 4 meow 7 //input into bookOrange
// The number is: 4. The word is: meow. The pointer holds a integer value of: 7. //output bookOrange

