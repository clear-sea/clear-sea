#include<iostream>

int ans,n;
int a[114][114];

void dfs(int i,int j,int sum){
    if(i==n){
        ans=std::max(ans,sum);
        return;
    }
    dfs(i+1,j+1,sum+a[i+1][j]);
    dfs(i+1,j+1,sum+a[i+1][j+1]);
}

int main(){
	std::cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			std::cin>>a[i][j];
		}
	}
    dfs(1,1,a[1][1]);
    std::cout<<ans;
    return 0;
}