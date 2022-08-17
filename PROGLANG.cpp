#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if(a>b){
	        swap(a,b);
	    }
	    if(a1>b1){
	        swap(a1,b1);
	    }
	    if(a2>b2){
	        swap(a2,b2);
	    }
	    if(a1==a && b1==b){
	        cout<<1<<endl;
	    }else if(a2==a && b2==b){
	        cout<<2<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}    
	return 0;
}
