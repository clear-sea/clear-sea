#include<iostream>
using namespace std;
long long d[1145];
int main(){
	int n;
	cin>>n;
	d[1]=0;d[2]=1;
	for(int i=3;i<=n;i++){
		d[i]=(i-1)*(d[i-2]+d[i-1]);
	}
	cout<<d[n];
	return 0;
}