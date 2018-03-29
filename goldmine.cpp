#include<bits/stdc++.h>
using namespace std;
int value[1000][1000];
int dp[1000][1000], m, n;

int grid(int i, int j){

	if((i>=n)||(j>=m))
		return 0;

	if(dp[i][j]!=-1)
		return dp[i][j];


	int ret1=0, ret2=0, ret3=0;


	ret1= value[i][j]+ grid(i-1,j+1);

	ret2= value[i][j]+ grid(i,j+1);

	ret3= value[i][j]+ grid(i+1,j+1);

	int mini= max(ret1,ret2);
	return dp[i][j]= max(mini,ret3);

}

main(){
	int opt;
	scanf("%d",&opt);

	for(int i=0;i<opt;i++){
		scanf("%d %d",&n, &m);

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				dp[i][j]=-1;
			}
		}


		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&value[i][j]);
			}
		}
        int maxi=-194, temp;

        for(int i=0; i<n; i++){
            if((temp=grid(i, 0))>maxi)
                maxi= temp;
        }

		cout << maxi << endl;
	}
}
