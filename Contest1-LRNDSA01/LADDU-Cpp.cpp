#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
    cin>>t;
    while(t--){
        int n, sum=0;
        string origin;
        cin>>n;
        cin>>origin;
        for(int i=0;i<n;i++){
            string type;
            cin>>type;
            if(type=="CONTEST_WON"){
                int rank;
                cin>>rank;
               sum+=300;
               if(rank<=20)
               sum+=(20-rank);
            }
            else if(type=="TOP_CONTRIBUTOR")
                sum+=300;
            else if( type=="BUG_FOUND"){
                int severity=0;
                cin>>severity;
                sum+=severity;
            }
            else if( type=="CONTEST_HOSTED")
                sum+=50;
        }
        if(origin=="INDIAN")
            cout<<sum/200<<endl;
        else
            cout<<sum/400<<endl;
    }
    return 0;
}
