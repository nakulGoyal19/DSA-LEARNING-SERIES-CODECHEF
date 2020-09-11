#include <iostream>

using namespace std;

void operate(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int min = a[0];
    long long res = min;
    for(int i=1;i<n;i++){
        if(a[i]==1){
            res+=(n-i);
            break;
        }
        if(a[i]<=min)
            min=a[i];
        res+=min;
    }
    std::cout << res << std::endl;

}

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    operate();
	}
	return 0;
}
