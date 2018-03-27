#include<bits/stdc++.h>

int dp[1000];

int fibonacci(int n){
    if(dp[n]!=-1)
        return dp[n];
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    dp[n]= fibonacci(n-1)+fibonacci(n-2);
    return dp[n];

}



main(){

    int n;

    scanf("%d",&n);

    memset(dp, -1,sizeof dp);

    int fib= fibonacci(n);

    printf("%dth fibonacci number: %d",n,fib);




}
