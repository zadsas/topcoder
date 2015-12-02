#include <iostream>
#include <vector>
using namespace std;

class BusinessTasks {
	public:
	string getTask(vector<string> list, int n){

		int index = 0;
		
		while(list.size()!=1){
			index=index+n-1;
			index=index%list.size();
			list.erase(list.begin()+index);
		}

		return list[0];	

		/* First attemp: Too long		
		int size = list.size(); 
		vector<int> removed; 
		for(int i=0;i<size;i++){ 
			removed.push_back(1);
		}
		int index = 0;
		int jumps = 1;

		while(size!=1){
			
			if(index>=list.size()){
				index=0;
				continue;
			}

			if(jumps==n && removed[index]==1){
				removed[index] = 0;
				jumps = 1;
				index++;
				size--;
				continue;
			}

			if(removed[index]==1){
				index++;
				jumps++;	
				continue;
			}

			if(removed[index]==0){
				index++;
				continue;
			}


		
		}

		int i=0;
		while(removed[i]==0) i++;
		
		return list[i];	
		*/	
	}
}; 

int main () {

	vector<string> tasks;
	tasks.push_back("a");
	tasks.push_back("b");
	tasks.push_back("c");
	tasks.push_back("d");
	tasks.push_back("e");

	int n = 3;

	BusinessTasks usedClass;

	string answer = usedClass.getTask(tasks, n);

	cout << answer << endl;
	
	
	return 0;
}
