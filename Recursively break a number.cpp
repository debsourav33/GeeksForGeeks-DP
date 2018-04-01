#include<bits/stdc++.h>
using namespace std;
int dp[10000];

int call(int n){
    if(dp[n]!=-1)
        return dp[n];
    if(n<=11)
        return dp[n]=n;

    int ret1= max(n/2,call(n/2));
    int ret2= max(n/3,call(n/3));
    int ret3= max(n/4,call(n/4));

    return dp[n]=max(n,ret1+ret2+ret3);

}

main(){
    int opt;
    cin>>opt;
    for (int i=0;i<opt;i++){
        int n;
        scanf("%d",&n);

        for(int i=0;i<10000;i++)
            dp[i]=-1;

        printf("%d\n",call(n));
    }

}
