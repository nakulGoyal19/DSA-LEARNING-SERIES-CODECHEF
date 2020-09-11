#include <iostream>
using namespace std;

int maxSS(int n,int c){
    int a[n];
    for(int i=0;i<n;i++)std::cin >> a[i];
    int i=0,j=0,cn=c-1,temp=0,max=0;
    int flag[c+1]={0};
    while(j<n){
        if(cn==0&&flag[a[j]]==0){
            while(cn==0){
                flag[a[i]]--;
                if(flag[a[i]]==0){
                    cn++;
                }
                i++;
            }
        }
        
        if(flag[a[j]]==0)
            cn--;
        flag[a[j]]++;
        j++;
        max=max<j-i?j-i:max;
    }
    return max;
}

int main() {
	// your code goes here
	int tc,n,c;
	std::cin >> tc;
	while(tc--){
	    std::cin >> n >> c;
	    std::cout << maxSS(n,c) << std::endl;
	}
	return 0;
}
