
#include <iostream>

using namespace std;

class MightGoWrong {
	MightGoWrong()
	{
		char * myChar = new char[9999999];
		delete[] myChar;
		throw bad_alloc();
	}
};

int main() {

	try {
		MightGoWrong wrong();
	}
	catch (bad_alloc &e)
	{
		cout << e.what() << endl;
	}

	int iVal = 8;
	int* pVal;
	pVal = &iVal;

	cout << *pVal << endl;
	cout << pVal << endl;
	cout << &iVal << endl;

	return 0;
}