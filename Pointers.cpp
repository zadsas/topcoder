#include<iostream>
using namespace std;

int main(){

	cout << "POINTERS " << endl;

	int c = 11;
	int k = 10;
	cout << "Address of k: " << &k << endl;
	cout << "Value of k: " << k << endl;

	int my_array[] = {1,23,17,4,-5,100};
	cout << "Address of my_array: " << &my_array << endl;

	int *ptr;


	ptr = &k;
	cout << "Address of ptr: " << &ptr << endl;
	cout << "Value of ptr: " << ptr << endl;

	*ptr = 7;
	cout << "Value of k: " << k << endl;

	ptr = my_array;
	cout << "Address of ptr: " << &ptr << endl;
	cout << "Value of ptr: " << ptr << endl;
	
	cout << *(ptr+2) << endl;
	cout << *(my_array+2) << endl;

	ptr = &c;
	cout << "Value of ptr: " << *ptr << endl;
	

	cout << endl;
	cout << "REFERENCES " << endl;

	int &ref = k;
	cout << "Address of ref: " << &ref << endl;
	cout << "Value of ref: " << ref << endl;

	ref = 5;
	cout << "Value of k: " << k << endl;

	ref = c;
	cout << "Value of ref: " << ref << endl;
	cout << "Value of k: " << k << endl;

	ref = 3;
	cout << "Value of c: " << c << endl;
	cout << "Value of ref: " << ref << endl;
	cout << "Value of k: " << k << endl;

	return 0;
}
