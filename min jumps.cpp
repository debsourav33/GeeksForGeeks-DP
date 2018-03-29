#include<bits/stdc++.h>

int n, value[1000], dp[1000];

int jumps(int u){

    if(dp[u]!=-2)  return dp[u];

    if(u>=n-1)
        return dp[u]=0;

    if(value[u]==0)
        return dp[u]=-1;

    int mini=999;

    for(int i=u+1; i<=u+value[u];i++){     //{1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}

        if(i<n){
            if(jumps(i)<mini)
                mini=jumps(i);
        }

    }

    if(mini==-1)
        return -1;
    else
        return dp[u]=mini+1;

}

main(){
    int opt;
    scanf("%d",&opt);

    for(int i=0;i<opt;i++){
        scanf("%d",&n);

        for(int i=0;i<1000;i++)
            dp[i]=-2;

        for(int i=0;i<n;i++){
            scanf("%d",&value[i]);
        }

        printf("%d\n",jumps(0));
    }
}

