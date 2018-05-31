
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

int ConstructorMain() {

	try {
		MightGoWrong wrong();
	}
	catch (bad_alloc &e)
	{
		cout << e.what() << endl;
	}

	return 0;
}