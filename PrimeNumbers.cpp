#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char *argv[]){


	int ini = atoi(argv[1]); 
	int end = atoi(argv[2]);

	cout <<  "Prime numbers between " << ini << " and " << end << endl;

	for(int i=ini;i<=end;i++){
		bool prime = true;
		for(int j=2;(j*j)<=i;j++){ //It is enough by checking till sqrt(i)
			if(i%j==0){
				prime = false;
				break;
			}
		}
		if(prime) cout << i << " ";

	}
	cout << endl;

	return 0;
}
