//3. Create a pointer to a int, send  it into a function that adds 2 to it and returns it. 
//Delete the pointer. What happens if you send it in as a constant? Try to do the same with an array, 
//one that's a stack array and one that's a heap array. Which one should be deleted?

#include <iostream>
#include <string>

using namespace std;

int* addTwo (int* pointerGiven);

int main()
{
	int x = 2;
	int* p = new int;
	*p = x;
	*p = *p + 1;
	int &y = x; 
	
	cout << "x is: " << x <<". pointers value is: " << *p << ". y is: " << y << endl;
	//outputs
	//		x is: 2. pointers value is: 3. y is: 2

	addTwo(p);
	cout << "pointers value is now:" << *p << "." << endl; //outputs 5
	
	delete p;
	
	char arrays[10]; // on the stack
	char* arrayh = new char[10];//on heap
	
	arrays[1] = 's';
	arrayh[1] = 'g';
	
	cout << "stack array at [1] is : " << arrays[1] << ". heap array at [1] is: " << arrayh[1] << endl; 
	
	delete [] arrayh;
}

int* addTwo (int* pointerGiven)
{
	*pointerGiven = *pointerGiven + 2;
	return pointerGiven;
}

//output
// x is: 2. pointers value is: 3. y is: 2
// pointers value is now:5. //after adding 2 to the pointer
// stack array at [1] is : s. heap array at [1] is: g