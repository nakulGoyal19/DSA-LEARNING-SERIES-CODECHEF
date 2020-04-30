#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	int games;
	while(tc>0){
	    cin>>games;
	    while(games>0){
	        int arr[3];
	        for(int i=0;i<3;i++)
	            cin>>arr[i];
	        int temp = arr[1]%2;
	        if(temp == 0){
	            std::cout << arr[1]/2 << std::endl;
	        }
	        else{
	            if(arr[0]==arr[2])
	                std::cout << arr[1]/2 << std::endl;
	            else
	                std::cout << arr[1]/2+1 << std::endl;
	        }
	        games--;
	    }
	    tc--;
	}
	return 0;
}
