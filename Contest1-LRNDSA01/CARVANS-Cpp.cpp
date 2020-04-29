#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	int n;
	cin>>tc;
	while(tc>0)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int min=a[0],c=1;
	    for(int i=1;i<n;i++){
	        if(a[i]<=min){
	            c++;
	            min=a[i];
	        }
	    }
	    std::cout << c << std::endl;
	    
	    tc--;
	}
	return 0;
}
