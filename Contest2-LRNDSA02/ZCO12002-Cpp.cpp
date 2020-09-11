#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int n, x, y;
	cin >> n >> x >> y;
	int start[x];
	int end[y];
	int contests[n][2];
	for(int i=0;i<n;i++)
	    cin >> contests[i][0] >> contests[i][1];
	for(int i=0;i<x;i++)
	    cin >> start[i];
	for(int i=0;i<y;i++)
	    cin >> end[i];
	   
	/** 
	 * Brute force
	 */
// 	int s=0, res=-1;
// 	while(s<x) {
// 	    for (int i=0;i<y;i++) {
// 	        for (int j=0;j<n;j++) {
// 	            if (start[s]<=contests[j][0] && end[i]>=contests[j][1]) {
// 	                if (res==-1 || end[i]-start[s] < res)
// 	                    res = end[i]-start[s];
// 	            }
// 	        }
// 	    }
// 	    s++;
// 	}
// 	cout << res+1;


    /**
     * Time limit exceed
     */
    // int result = INT_MAX;
    // for(int i=0;i<n;i++) {
    //     int nss = -1;
    //     int nse = -1;
    //     int diff= INT_MAX;
    //     for(int j=0;j<x;j++){
    //         if(contests[i][0]>=start[j] && contests[i][0]-start[j]<diff){
    //             diff = contests[i][0]-start[j];
    //             nss = start[j];
    //         }
    //     }
    //     if (nss==-1) continue;
    //     diff = INT_MAX;
    //     for(int j=0;j<y;j++){
    //         if(contests[i][1]<=end[j] && end[j]-contests[i][1]<diff){
    //             diff = end[j]-contests[i][1];
    //             nse = end[j];
    //         }
    //     }
    //     if (nse==-1) continue;

    //     if(nse-nss>=0 && nse-nss<result)
    //         result = nse-nss;
    // }
    // cout << result+1;

    sort(start,start+x);
	sort(end,end+y);
    
    int result = INT_MAX;
    for(int i=0;i<n;i++) {
        
        if(contests[i][0] < start[0])
            continue;
        if(contests[i][1] > end[y-1])
            continue;

        int* t1 = lower_bound(start,start+x,contests[i][0]);
        int* t2 = lower_bound(end,end+y,contests[i][1]);

        if(*t1 != contests[i][0])
    	    t1--;
        
        int mint = (*t2-*t1+1);
        if(mint<result)
            result = mint;

    }
    cout << result;
    
    
    
	return 0;
}
