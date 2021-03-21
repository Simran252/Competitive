#include <iostream>
#include<algorithm>
using namespace std;
int sol(string s,int n,int k){

    int count=0,res,addi=0;
      for (int i = 0; i <(s.size())/2; i++)
       {
           if (s[i]!=s[(s.size())-i-1])
           {
                count++;
           }
       }



       if(k>count){
           return (k-count);

       }
       else if(k==count){
            return 0;

       }
       else if(k<count){

           return count-k;

       }
}
int main() {

	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
	    int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ansi=sol(s,n,k);

    	cout<<"Case #"<<t<<": "<<ansi<<"\n";
	
}
}
