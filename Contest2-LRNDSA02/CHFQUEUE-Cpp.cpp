#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

int main() {
	// your code goes here
	int n,k;
	std::cin >> n >> k;
	int seniority[n];
	for(int i=0;i<n;i++)std::cin >> seniority[i];
	
	stack<pair<int,int>> s;
	long long res = 1;
	
	for(int i=0;i<n;i++){
	    if(s.empty() || seniority[i]>=s.top().second)
	        s.push(make_pair(i,seniority[i]));
	    else{
	        while(!s.empty() && seniority[i]<s.top().second){
	            res = res*(i-(s.top().first)+1)%MOD
	            s.pop();
	        }
	        s.push(make_pair(i,seniority[i]));
	    }
	}
	std::cout << res << std::endl;
	
	return 0;
}
