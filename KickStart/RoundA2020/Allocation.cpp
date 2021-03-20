#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        //solu
        int c=0;
         sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=d){
                d=d-arr[i];
                c+=1;
            }
            else{
                break;
            }
    	}
    	cout<<"Case #"<<t<<": "<<c<<"\n";
	
}
}