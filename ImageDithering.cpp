#include <iostream>
#include <vector>
using namespace std;

class ImageDithering {
	
	public:
	int count(string dithered, vector<string> screen){

		vector<bool>is(26,false);

		for(int i=0;i<dithered.length();++i) is[dithered[i]-'A']=true;

		int res=0;
	
    		for(int i=0;i<screen.size();++i)
			for(int j=0;j<screen[0].length();++j)
				if(is[screen[i][j]-'A']) res++;

    	
		return res;
	}
	
}; 

int main () {

	string dithered = "BW";

	vector<string> screen;
	screen.push_back("AAAAAAAA");
	screen.push_back("ABWBWBWA");
	screen.push_back("AWBWBWBA");
	screen.push_back("ABWBWBWA");
	screen.push_back("AWBWBWBA");
	screen.push_back("AAAAAAAA");

	ImageDithering usedClass;

	int answer = usedClass.count(dithered, screen);

	cout << answer << endl;
	
	
	return 0;
}
