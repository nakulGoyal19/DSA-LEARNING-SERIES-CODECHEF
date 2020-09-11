#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pres(char c){
    if(c == '^') 
	return 3; 
	else if(c == '*' || c == '/') 
	return 2; 
	else if(c == '+' || c == '-') 
	return 1; 
	else
	return -1; 
}

string inFixToPostFix(string input){
    string res;
    stack<char> s;
    for(int i=0;i<input.length();i++){
        if(input[i]=='(')
            s.push(input[i]);
        else if(input[i]=='+' || input[i]=='-'  || input[i]=='*' || input[i]=='/'  || input[i]=='^'){
            while(!s.empty()&&pres(input[i])<=pres(s.top())){
                res+=s.top();
                s.pop();
            }
            s.push(input[i]);
        }
        else if(input[i]==')'){
            while(s.top()!='('){
                res += s.top();
                s.pop();
            }
            s.pop();
        }else{
            res += input[i];
        }
    }
    while(!s.empty()){
                res+=s.top();
                s.pop();
            }
    return res;
}

int main() {
	// your code goes here
	int tc,n;
	string s;
	std::cin >> tc;
	while(tc--){
	    std::cin >> n >> s;
	    std::cout << inFixToPostFix(s) << std::endl;
	}
	return 0;
}
