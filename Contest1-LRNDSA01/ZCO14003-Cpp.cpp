#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	sort(arr,arr+n);
	long long max = 0;
	for(int i=0;i<n;i++)
	    if(arr[i]*(n-i)>max)
	        max = arr[i]*(n-i);
	std::cout << max;
	return 0;
}
