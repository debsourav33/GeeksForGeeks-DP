#include<bits/stdc++.h>
long long dp[100000];

long long tiles(long long n){

    if(dp[n]!=-1)
        return dp[n];

    if((n==1)||(n==2)||(n==3))
        return dp[n]=1;

    if(n==4)
        return dp[n]=2;

    return dp[n]=tiles(n-1)+tiles(n-4);

}

main(){
    int opt;
    scanf("%d",&opt);

    for(int i=0;i<opt;i++){
        long long n;
        memset(dp, -1, sizeof dp);

        scanf("%lld",&n);

        printf("%lld\n",tiles(n));
    }
}
