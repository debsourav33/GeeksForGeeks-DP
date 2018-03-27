#include<bits/stdc++.h>
int value[1000], n, dp[1000];

int lis(int u){
    int maxi=0;

    if(dp[u]!=-1)
        return dp[u];

    for(int v= u+1; v<n; v++){
        if(value[v]>value[u]){

            if(lis(v)>maxi)
                maxi= lis(v);
        }


    }

    dp[u]= 1+maxi;
    return dp[u];





}

main(){
    scanf("%d",&n);

    memset(dp, -1, sizeof dp);

    for(int i=0; i<n; i++){
         scanf("%d",&value[i]);
    }

    printf("%d\n",lis(0));


}
