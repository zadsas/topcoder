#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>

using namespace std;

int main(){

	string s = "1234";
	int n = atoi(s.c_str()); //Because is string, if it is char* then atoi is enough
	n++;
	cout << n << endl;

	int m = 14;
	stringstream stream;	
	stream << m;
	string t = stream.str();
	cout << t << endl;
	
	return 0;
}
