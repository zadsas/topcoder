#include <iostream>
#include <vector>
using namespace std;

class TallPeople {
	public:
	vector<int> getPeople(vector<string> people){

		vector<int>tallest(26,-1);

		int tallestSmallestRow = -1;

		for(int i=0;i<people.size();i++){
			string row = people[i];
			int smallestRow = 1001;
			for(int j=0;j<row.size();j=j+2){
				int num = row[j];
				smallestRow = min(num,smallestRow);
				tallest[j] = max(num,tallest[j]);
			}
			tallestSmallestRow = max(smallestRow,tallestSmallestRow);
		}

		int smallestTallestColumn = 1001;
		for(int i=0;i<tallest.size();i++) if(tallest[i]<smallestTallestColumn && tallest[i]!=-1) smallestTallestColumn=tallest[i];

		vector<int> aux;
		aux.push_back((tallestSmallestRow-48)); //From char to integer
		aux.push_back((smallestTallestColumn-48));
		
		return aux;

	}
};


int main () {

	vector<string> people;
	people.push_back("9 2 3");
	people.push_back("4 8 7");

	TallPeople usedClass;

	vector<int> answer = usedClass.getPeople(people);

	cout << answer[0] << " " << answer[1] << endl;
	
	
	return 0;
}
