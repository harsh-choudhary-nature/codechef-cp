#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n<4){
	        cout<<"YES\n";
	    }else{
	        int count=0;
	        for(int j=0;j<n;j++){
	            
	            switch(s[j]){
	                case 'a':
	                    count=0;break;
	                case 'e':
	                    count=0;break;
	                case 'i':
	                    count=0;break;
	                case 'o':
	                    count=0;break;
	                case 'u':
	                    count=0;break;
	                default:
	                    count+=1;
	            }
                if(count==4){
                    break;
                }
	        }
	        if(count==4){
	            cout<<"NO"<<endl;
	        }else{
	            cout<<"YES\n";
	        }
	    }
	}
	return 0;
}
