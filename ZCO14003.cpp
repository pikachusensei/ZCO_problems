#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	stack<int>s;
	cin>>n;
	int arr[n];
	int min=0;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	long long int res=0,count;
	//sort.....
	
	sort(arr,arr+n);
	
	int temp=n;
	
	for(int i=n-1;i>-1;i--){
	    s.push(arr[i]);
	}
	
	while(s.empty()==false){
	    count=(s.size())*s.top();
	    s.pop();
	    res=max(res,count);
	}
	
	cout<<res;
	
	
	
	return 0;
}
