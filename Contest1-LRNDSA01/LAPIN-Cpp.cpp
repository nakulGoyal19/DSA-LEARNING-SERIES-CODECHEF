#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	std::cin >> tc;
	string str;
	string s1,s2;
	int len,len1,flag;
	while(tc>0){
	    flag=0;
	    int ch[26]={0};
	    cin>>str;
	    len = str.length();
	    len1 = len%2==0?len:len-1;
	    s1 = str.substr(0,len1/2);
	    s2 = len%2 == 0?str.substr(len1/2,len1/2):str.substr(len1/2+1,len1/2);
	    for(int i=0;i<s1.length();i++)
	    {
	        ch[s1[i]-'a']+=1;
	        ch[s2[i]-'a']-=1;
	    }
	   // std::cout << s1 << " ";
	   // std::cout << s2 << std::endl;
	    for(int i=0;i<26;i++)
	    {
	        if(ch[i]!=0){
	            std::cout << "NO" << std::endl;
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==0)
	        std::cout << "YES" << std::endl;
	        

	    
	    tc--;
	}
	return 0;
}
