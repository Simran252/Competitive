#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
     for(int T=1;T<=t;T++){
         string s;
         cin>>s;
         int size=s.length();
         string s2;
      s2.insert(0,s[0]-'0','(');
      s2.insert(s[0]-'0',1,s[0]);
      int diff;
      for (int i = 1; i < s.size(); i++)
      {
         if (s[i]<s[i-1])
         {
            diff=(s[i-1]-'0')-(s[i]-'0');
            s2.insert(s2.size(),diff,')');
            s2.insert(s2.size(),1,s[i]);
         }
         else
         {
            diff=(s[i]-'0')-(s[i-1]-'0');
            s2.insert(s2.size(),diff,'(');
            s2.insert(s2.size(),1,s[i]);
         }
      }
      int last=s[s.size()-1]-'0';
      s2.insert(s2.size(),last,')');

         cout<<"Case #"<<T<<": "<<s2<<"\n";
      }
}