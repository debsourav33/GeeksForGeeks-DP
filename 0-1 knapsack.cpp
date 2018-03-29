#include<bits/stdc++.h>
using namespace std;

int  dp[1000][1000];
int value[1000];
int weight[1000];

int knapsack(int i, int amount){
    if(i<0)
        return 0;

    if(dp[i][amount]!=-1)
        return dp[i][amount];

    if(amount<=0)
        return 0;



    int ret1=0, ret2=0;

    if (amount- weight[i]>=0)
        ret1= value[i]+ knapsack(i-1, amount- weight[i]);

    ret2= knapsack(i-1, amount);

    return dp[i][amount]=max(ret1, ret2);


}

main(){
    int opt;
    scanf("%d",&opt);
    for(int i=0;i<opt;i++){
        int n;

        int amount;

        scanf("%d",&n);

        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                dp[i][j]=-1;
            }
        }

        scanf("%d",&amount);

        for(int i=0;i<n;i++)
            scanf("%d",&value[i]);

        for(int i=0;i<n;i++)
            scanf("%d",&weight[i]);

        printf("%d\n",knapsack(n-1,amount));
    }
}
