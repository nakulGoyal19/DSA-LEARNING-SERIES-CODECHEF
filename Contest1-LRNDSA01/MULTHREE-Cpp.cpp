#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
//     // Time-out approach
// 	int tc,d0,d1;
// 	long long len;
// 	std::cin >> tc;
// 	int sum;
// 	int res,temp;
// 	while(tc>0){
// 	    cin>>len>>d0>>d1;
// 	    sum = d0+d1;
// 	    res=sum;
// 	    for(long long i = 2;i < len;i++){
// 	        temp = sum%10;
// 	        res = (res+temp)%3;
// 	        sum = sum%10;
// 	        sum += temp;
// 	    }
// 	    std::cout << res << std::endl;
// 	    tc--;
// 	}
// 	return 0;

    //Write approach
    int t, d0, d1;
    long long k;
    cin >> t;
    while (t--) {
        cin >> k >> d0 >> d1;
        int s = d0 + d1;
        long long c = ((2*s) % 10) + ((4*s) % 10) + ((8*s) % 10) + ((6*s) % 10);
        // s = 7, c =  4 + 8 + 6 + 2 = 20
        // But 3 4 7 4 8  3+4+7+4+8 = 26

        long long no_of_cycles = (k-3) / 4;
        long long ans = 0;
        
        if (k == 2) {
            ans = s;
        }
        else {
            ans = (s + (s % 10)) + ((c%3) * no_of_cycles);
            int leftover = ((k-3) - (4 * no_of_cycles));

            int p  = 2;
            for (int i = 1; i <= leftover; i++) {
                ans += (p * s) % 10;
                p = (p * 2) % 10;
            }
        }
        ((ans % 3) == 0) ? cout << "YES" << '\n' : cout << "NO"  << "\n";
    }
}
