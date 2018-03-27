#include<bits/stdc++.h>

int dp[1000];

int bino(int n, int k){
    if (k==0)
        return 1;

    if(n==k)
            return 1;

    return bino(n-1,k-1)+bino (n-1,k);
}



main(){

    int n,k;

    scanf("%d %d",&n,&k);

    memset(dp, -1,sizeof dp);

    int bin= bino(n,k);

    printf("The binomial coefficient: %d",bin);




}
