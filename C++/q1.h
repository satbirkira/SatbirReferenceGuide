// 1. Make structure with int number and string word, manipulate it with main. 
// Add operator that adds two of these structures, appends the strings and adds the ints. Do the
// same, but have them as methods instead of operators.
// When using <<, we must say "The number is " number ". The string is" string.
#include <iostream>
#include <string>

using namespace std;

struct dictionary
{
	int number;
	string word;
	int *p;
};

//header for functions
dictionary operator +(const dictionary& firstBook, const dictionary& secondBook);
//dictionary& operator =(const dictionary& firstBook, const dictionary& secondBook);
ostream& operator << (ostream& outputStreamGiven, const dictionary& book);
dictionary add(const dictionary& bookOne, const dictionary& bookTwo);
istream& operator >>(istream& inputStreamGiven, dictionary& bookGiven);

int main ()
{
	dictionary englishVersion, frenchVersion, bilingualVersion;
	
	
	//normal manipulations
	englishVersion.number = 20;
	englishVersion.word = "cat";
	englishVersion.p = new int;
	*englishVersion.p = englishVersion.number;
	
	//output the pointer
	cout << "The pointer holds :" << *englishVersion.p << endl;
	
	delete englishVersion.p;
	
	frenchVersion.number = 10;
	frenchVersion.word = "dog";
	
	//use operators
	bilingualVersion = englishVersion + frenchVersion;
	cout << bilingualVersion;
	
	//use methods that do the same as operator
	dictionary germanVersion, russianVersion, gerRusVersion;
	germanVersion.number = 1;
	germanVersion.word = "kurt";
	russianVersion.number = 2;
	russianVersion.word ="da";
	
	//add russian to german to gerRusVersion
	gerRusVersion = add(germanVersion, russianVersion);
	
	//output gerRusVersion
	cout << gerRusVersion;

	//use input operator
	dictionary spanishVersion;
	cin >> spanishVersion;
	
	//output spanishVersion
	cout << spanishVersion;
	
	return 0;
}

dictionary operator +(const dictionary& firstBook, const dictionary& secondBook)
{
	dictionary newbook;
	newbook.number = firstBook.number + secondBook.number;
	newbook.word = firstBook.word + secondBook.word;
	return newbook;
}

//c++ takes care of this, we can set one struct equal to another using c++
// dictionary& operator =(dictionary& firstBook, const dictionary& secondBook)
// {
	// firstBook.number = secondBook.number;
	// firstBook.word = secondBook.word;
	// return firstBook;
// }

ostream& operator <<(ostream& outputStreamGiven, const dictionary& book)
{
	outputStreamGiven << "The number is " << book.number << ". The string is " << book.word << "\n";
	return outputStreamGiven;
}

dictionary add(const dictionary& bookOne, const dictionary& bookTwo)
{
	dictionary newBook;
	newBook.number = bookOne.number + bookTwo.number;
	newBook.word = bookOne.word + bookTwo.word;
	return newBook;
}

istream& operator >>(istream& inputStreamGiven, dictionary& bookGiven)
{
	inputStreamGiven >> bookGiven.number;
	inputStreamGiven >> bookGiven.word;
	return inputStreamGiven;
}

//Output
// The pointer holds :20 //englishVersion pointer
// The number is 30. The string is catdog //bilingualVersion output
// The number is 3. The string is kurtda //gerRusVersion output
// 2 meow //the input to spanishVersion
// The number is 2. The string is meow //spanishVersion output