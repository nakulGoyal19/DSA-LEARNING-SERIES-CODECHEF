#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc,n;
	int flag = 0;
	int c1 = 0,c2 = 0;
	std::cin >> tc;
	while(tc--)
	{
	    flag = 0;
	    c1 = 0;
	    c2 = 0;
	    std::cin >> n;
	    string shots;
	    cin>>shots;
	    for(int i=0;i<shots.length();i++){
	        if(i%2==0){
	            c1+= (int)shots[i]-(int)('0');
	        }else{
	            c2+= (int)shots[i]-(int)('0');
	        }
	        int temp = (shots.length()-(i+1))%2==0?(shots.length()-(i+1))/2:(shots.length()-(i+1))/2+1;
	        if((c1>c2 && (c1-c2)>temp)  || (c1<c2 && (c2-c1)>(((shots.length())-(i+1))/2))){
	            std::cout << i+1 << std::endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag==1)continue;
	    cout<<n*2<<endl;
	    
	}
	return 0;
}
