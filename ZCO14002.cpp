

//not efficient nough to run all test case,but run for most of them

//use of sliding window....

//use DP for efficient ....

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int i=0;
	int j=1;
	int k=3;
	int min=0;
	int sum=0;
	
	while(j<n){
	    
	    if(arr[j]<=arr[min]){
	        min=j;
	    }
	    
	    if(j-i+1<k){
	        j++;
	    }
	    else if(j-i+1==k){
	        sum=sum+arr[min];
	        i=min+1;
	        j=i+1;
	        min=i;
	    }
	}
	
	cout<<sum;
	
	
	return 0;
}
