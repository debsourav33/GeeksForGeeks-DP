#include<bits/stdc++.h>

int value[1000], dp[1000], n;

int sums(int u){
    int maxi=0;

    if(dp[u]!=-1)
        return dp[u];

    for(int v=u+1; v<n; v++){
        if(value[v]>value[u]){
            if(sums(v)>maxi)
                maxi=sums(v);

        }

    }

    return dp[u]=value[u]+maxi;



}



main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&value[i]);
    }

    memset(dp, -1, sizeof dp);

    printf("%d\n",sums(0));

}
