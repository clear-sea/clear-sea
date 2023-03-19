#include<iostream>
using namespace std;

unsigned long long a[1000000];

int main(){
	int n,k;
	cin>>n;
	
	a[0]=1;
	a[1]=2;
	
	for(int i=2;i<1000000;i++){
		a[i]=2*a[i-1]+a[i-2];
	}
	
	for(int i=0;i<n;i++){
		cin>>k;
		cout<<a[k-1]%32767<<endl;
	}
	
	return 0;
}