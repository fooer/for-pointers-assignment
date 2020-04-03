//I/O stream for input output :)
#include <iostream>

using namespace std;

int main()
{

	//title of application
	cout << "\n\n**** Pointers Are Easy **\n\n" << endl;

	//if you have a reference you have to haave something to refer to 
	//here we create that something
	int age = 21;

	//create a ref to age
	//a ref will never be different then what it is referencing. 
	int& r_age = age;

	cout << "\nMy age from the variable age says: " << age << endl; 
	cout << "\nMy age from the ref age says: " << r_age << endl;
	cout << "\nNow I am changing the r_age value to 25\n";
		r_age = 25;
	cout << "\nNow after the change of only the ref r_age value\n";
	cout << "\nMy age from var age says: " << age << endl;
	cout << "\nMy age from the ref age says: " << r_age << endl;
	//************************************Pointer Mode Below***************************************************************
	//memory address is the only thing a pointer can actally hold
	//& has nothing to do with a reference its the address of operator
	int* p_age = &age;

	cout << "\nMy age from the var age says: " << age << endl;
	cout << "\nMy age from the pointer age says: " << p_age << endl;
	cout << "\nThe value of my age from dereferenceing the pointer age says: " << *p_age << endl;

	//ends the function
	//which because we are in main ends program
	return 0;
}
