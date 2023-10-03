#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	long long int sum=0;
	sort(v,v+n);
	
	for(int i=0;i<n;i++){
	    sum=sum + i*(v[i])-(n-i-1)*(v[i]);
	}
	cout<<sum;
	
	return 0;
}
