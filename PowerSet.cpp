#include <iostream>
#include <list>
#include <string>

using namespace std;

void powerSet(list<int> set, list< list<int> >& powerset) {

    /*Calculate the power of 2*/
    int power = (1 << set.size()) ;
	
    list<int> currentSet;

    /*Calculate 2^n sets*/
    for(int i = 0; i < power; i++) {

        currentSet.clear();
	list<int> aux = set;
        int working = i;
		
        for(int j = 0; j < set.size(); j++) {

            if (working & 1) {
                currentSet.push_back(aux.back());
            }
	    aux.pop_back();
            working >>= 1;

        }
	
	/*Add current set*/
        powerset.push_back(currentSet);
    }
}

int main() {

    list<int> set;
    list< list<int> > powerset;

    set.push_back(1);
    set.push_back(2);
    set.push_back(3);
    
    powerSet(set, powerset);  
  
    for (list< list<int> >::iterator it = powerset.begin(); it != powerset.end(); it++){
        list<int> aux = *it;
	cout << "{";
        for (list<int>::iterator it2 = aux.begin(); it2 != aux.end(); it2++){
		cout << *it2 << " ";
	}
	cout << "}" << endl;
    }
     //cout << "{" << (*it)  << "}" << endl;
   

    return 0;
}

