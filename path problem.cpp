#include<bits/stdc++.h>
using namespace std;
int value[1000][1000];
int dp[1000][1000];

int grid(int i, int j){

	if((i<0)||(j<0))
		return -1;

	if(dp[i][j]!=-1)
		return dp[i][j];

	if((i==0))
		return dp[i][j]= value[i][j]; //1 2 3
                                                    //4 8 2
                                                    //1 5 3

	int ret1=999999, ret2=999999, ret3=999999;

    ret1= value[i][j]+ grid(i-1,j);

	ret2= value[i][j]+ grid(i-1,j+1);

	ret3= value[i][j]+ grid(i-1,j-1);

	int mini= max(ret1,ret2);
	return dp[i][j]= max(mini,ret3);

}

main(){
	int opt;
	scanf("%d",&opt);

	for(int i=0;i<opt;i++){
		int n, maxi=0;
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

        for(int i=n-1;i>=0;i--){
            int got= grid(n-1,i);

            if(got>maxi)
                maxi=got;
        }

        printf("%d\n",maxi);
	}
}
