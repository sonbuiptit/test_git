#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int m= n*3;
	int arr[m];
	for(int i=0; i< m;i++){
		cin>>arr[i];
		
	}
	
	for(int j=0;j<n;j++){
					
			cout<<arr[0+j]<<arr[n+j]<<arr[2*n+j];
			
	}
}
