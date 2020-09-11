#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc,n;
	std::cin >> tc;
	int res = 0;
	while(tc>0){
	    res = 0;
	    std::cin >> n;
	    int spv[n][3];
	    for(int i=0;i<n;i++)
	        cin>>spv[i][0]>>spv[i][1]>>spv[i][2];
	    for(int i=0;i<n;i++){
	        if(((spv[i][1]/(spv[i][0]+1))*spv[i][2])>res)
	            res = (spv[i][1]/(spv[i][0]+1))*spv[i][2];
	    }
	    std::cout << res << std::endl;
	    tc--;
	}
	return 0;
}
