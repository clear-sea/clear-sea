#include<iostream>
using namespace std;

int a[10],n;
bool visited[10];

void dfs(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(visited[i]){
			continue;
		}
		a[index]=i;
		visited[i]=1;
		dfs(index+1);
		visited[i]=0;
	}
}

int main(){
	cin>>n;
	dfs(1);
	return 0;
}