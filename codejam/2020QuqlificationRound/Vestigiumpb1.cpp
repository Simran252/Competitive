#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
     for(int T=1;T<=t;T++){
        int n;
        int res=0;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i==j){
                    res=res+arr[i][j];

                    
                }
                
            }
        }
       cout<<"Case #"<<T<<": "<<res<<" ";
        set<int> se;
        int j;
        int rsum=0,csum=0,row=0,col=0;
        int asum=((n)*(n+1))/2;
        for (int i = 0; i < n; i++)
        {
            rsum=0;
            csum=0;
            for( j=0;j<n;j++)
            {
                rsum=rsum+(arr[i][j]);
                csum=csum+(arr[j][i]);
                
            }
            if(rsum!=asum){
                row++;
            }
            if(csum!=asum){
                col++;
            }
            if(rsum==asum){
                    

                 for (int k = 0; k < n; k++){
                    se.insert(arr[i][k]);

                 }
                 if(se.size()!=n){
                     row++;
                 }
                 se.clear();
             
            }
            if(csum==asum){

                    for (int k = 0; k < n; k++){
                     se.insert(arr[k][i]);

                 }
                 if(se.size()!=n){
                     col++;
                 }
                  se.clear();
            }

        }
        
        cout<<row<<" "<<col<<"\n";
    }
    
}