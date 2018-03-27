#include<bits/stdc++.h>

int coin[]= {5,8,12,15,18}, dp[100][100];
int make= 20;

int call(int i, int amount){

    if(dp[i][amount]!=-1)
        return dp[i][amount];

    if(amount==0)
        return 1;

    if(i>=5&& amount>0)
        return 0;

    int ret1=0, ret2=0;

    if(amount-coin[i]>=0)
        ret1= call(i, amount-coin[i]); //i+1 if coin can be used only once

    ret2= call(i+1, amount);

    return dp[i][amount]=ret1 || ret2; //ret1+ret2 to return no. of ways possible


}

main(){
    for(int i=0;i<100;i++)
        memset(dp[i],-1,sizeof dp[i]);

    printf("%d",call(0,make));


}
