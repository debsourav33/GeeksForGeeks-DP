#include<bits/stdc++.h>

int lis(int a[], int n){
    int dp[1000];

    for(int i=0;i<n;i++){
        dp[i]=1;
    }


    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){

            if((a[i]>a[j]) && dp[i]< dp[j] +1)
                dp[i]= dp[j]+1;

        }
    }

    int maxi= 0;

    for(int i=0;i<n;i++){
        if(maxi<dp[i])
            maxi=dp[i];
    }

    return maxi;
}





main(){
    int a[100], n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("%d\n",lis(a,n));







}
