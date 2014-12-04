//Dangaling points

using namespace std;

int main ()
{
	int x = 2;
	int * p = &x;
	
	delete p;
	
	cout << *p; //undefine result
	
	p=NULL;
	
	exit 0
}