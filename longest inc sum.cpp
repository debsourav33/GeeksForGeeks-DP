#include<bits/stdc++.h>
int dp[1000];
int sum(int a[], int n){

    for(int i=0;i<n;i++)
            dp[i]=a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if((a[j]>a[i])&&((dp[i]+a[j]) > dp[j]))
                dp[j]=dp[i]+a[j];

        }


    }

    int maxi=0;

    for(int i=0;i<n;i++){
        if(dp[i]>maxi)
            maxi=dp[i];
    }

    return maxi;

}

main(){
    int a[100], n;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("%d\n",sum(a,n));




}
