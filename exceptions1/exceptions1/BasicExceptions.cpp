
#include <iostream>
using namespace std;

void mightGoWrong();

void nestedMightGoWrong()
{
	mightGoWrong();
}

void  mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	//if (error1) throw 8;
	if (error1) throw "something went wrong";
	if (error2) throw string("something else went wrong");
}

int mainBasic()
{
	try
	{
		nestedMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error Code: " << e << endl;
	}
	catch (const char * e)
	{
		cout << "char message: " << e << endl;
	}
	catch (string &e)
	{
		cout << "string-object message: " << e.c_str() << endl;
	}

	cout << "main: still running" << endl;

	return 0;
}