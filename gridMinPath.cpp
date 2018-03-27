#include<bits/stdc++.h>
using namespace std;
int value[1000][1000];
int dp[1000][1000];

int grid(int i, int j){

	if((i<0)||(j<0))
		return 999999;

	if(dp[i][j]!=-1)
		return dp[i][j];

	if((i==0)&&(j==0))
		return dp[i][j]= value[i][j]; //1 2 3
                                                    //4 8 2
                                                    //1 5 3

	int ret1=0, ret2=0, ret3=0;


	ret1= value[i][j]+ grid(i-1,j);

	ret2= value[i][j]+ grid(i,j-1);

	ret3= value[i][j]+ grid(i-1,j-1);

	int mini= min(ret1,ret2);
	return dp[i][j]= min(mini,ret3);

}

main(){
	int opt;
	scanf("%d",&opt);

	for(int i=0;i<opt;i++){
		int n;
		scanf("%d",&n);

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				dp[i][j]=-1;
			}
		}


		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&value[i][j]);
			}
		}

		printf("%d",grid(n-1,n-1));
	}
}
