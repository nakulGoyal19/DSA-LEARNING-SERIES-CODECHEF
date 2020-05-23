#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	std::cin >> n;
	int braces;
	stack<int> s;
	int nestedDepth=0,stNestedDepth=0,maxSeq=0,temp=0,stMaxSeq=0;
	for(int i=0;i<n;i++){
	    std::cin >> braces;
	    if(braces==1){
	        if(s.empty())
	            temp = i;
	        s.push(braces);
            if(s.size()>nestedDepth){
                nestedDepth = s.size();
                stNestedDepth = i+1;
            }
	    }
	    else{
	        if(s.empty())
	            break;
	        s.pop();
	        if(s.empty()){
	            if(maxSeq<i-temp+1){
	                maxSeq = i-temp+1;
	                stMaxSeq =  temp+1;
	            }
	        }
	    }
	}
	
	std::cout << nestedDepth <<  " " << stNestedDepth << " " << maxSeq << " " << stMaxSeq <<std::endl;
	return 0;
}
