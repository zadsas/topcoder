#include<iostream>
using namespace std;

class Overload{

	public:
	
		void f(int &x){
			x = 5;
		}		

};

int main(){

	Overload o;

	int a = 4;
	int &ref = a;
	o.f(ref);
	cout << a << endl;

	return 0;
}
