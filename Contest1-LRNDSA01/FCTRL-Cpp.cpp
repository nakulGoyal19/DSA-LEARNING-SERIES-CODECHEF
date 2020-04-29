#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	int n;
	cin>>tc;
	while(tc>0){
	    cin>>n;
	    int count = 0;
	    for(int i=5;n/i>=1;i*=5){
	        count+= n/i;
	    }
	    std::cout << count << std::endl;
	    tc--;
	}
	return 0;
}
