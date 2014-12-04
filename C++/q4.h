// 4. Create a main along with a function that keeps adding to a vector until eof. 
// The vector should display the size, capacity, and double in reserve if the 
// input it "reserve double". Try to use vector<int> *ptr = new vector<int>(); and 
//delete ptr; //ensure proper clean-up and destructor called.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
		vector<int> exampleVector;
		//add the number 16 to vector
		exampleVector.push_back(16);
		cout << "The current number of elements is: " << exampleVector.size() << endl; 
		cout << "The number of elements we can store is: " << exampleVector.capacity() << endl;
		cout << "exampleVector.at(0) is: " << exampleVector.at(0) << endl;
		//double the space
		cout << "doubling the size of exampleVector" << endl;
		exampleVector.reserve(exampleVector.capacity() + exampleVector.capacity());
		cout << "Vector size is: " << exampleVector.size() << endl; 
		cout << "Vector capacity is: " << exampleVector.capacity() << endl; 
		
		vector<int> exampleVector2;
		exampleVector2.push_back(11);
		exampleVector2.push_back(22);
		exampleVector2.push_back(33);
		cout << "Vector exampleVector2 size is: " << exampleVector2.size() << endl; 
		cout << "Vector exampleVector2 capacity is: " << exampleVector2.capacity() << endl; 
	return 0;
}

//output
// The current number of elements is: 1
// The number of elements we can store is: 1
// exampleVector.at(0) is: 16
// doubling the size of exampleVector
// Vector size is: 1
// Vector capacity is: 2

//Vector exampleVector2 size is: 3
//Vector exampleVector2 capacity is: 4
//therefore, everytime size=capacity and we want to add one, reserve is doubled
