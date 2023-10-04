#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long long int n;
	cin>>n;
	int k;
	cin>>k;
	int v[n];
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	
	sort(v,v+n);
	
	long long int j=n-1;
	
	long long int count=0;
	
	for(int i=0;j>i;i++){
	    int c=i;
	    
	    if(v[i]+v[j] <k){
	        count=count+j-i;
	       
	    }
	    else{
	        j--;
	        i=c-1;
	    }
	}
	
	cout<<count;
	
	return 0;
}
