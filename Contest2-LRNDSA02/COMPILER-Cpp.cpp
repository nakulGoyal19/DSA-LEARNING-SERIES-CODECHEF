#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int operate(){
    string str;
    std::cin >> str;
    stack<char> s;
    int temp=0,res=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='<')
            s.push(str[i]);
        else{
            if(s.empty())
                return res;
            s.pop();
            temp+=2;
            if(s.empty()){
                res+=temp;
                temp=0;
            }
        }
    }
    return res;
}

int main() {
	// your code goes here
	int tc;
	std::cin >> tc;
	while(tc--)
	    std::cout << operate() << std::endl;
	return 0;
}
