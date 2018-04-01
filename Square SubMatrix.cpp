#include<bits/stdc++.h>
using namespace std;

int value[1000][10000],dp[1000][1000],n,m, maxi=0 ;
int call(int i, int j){
    if(i>=n  || j>=m)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int ret1=0, ret2=0, ret3=0;

    ret1= call(i, j+1);
    ret2= call(i+1, j);
    ret3= call(i+1, j+1);

    int m= min(ret1, ret2);

    dp[i][j]= value[i][j]+ (value[i][j]>0) * min(m, ret3);

    if(dp[i][j]>maxi)
        maxi=dp[i][j];

    return dp[i][j];

}

main(){
    int opt;
    cin>> opt;
    for(int k=0;k<opt;k++){
        maxi=0;
        cin >> n>>m;

        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                dp[i][j]=-1;
            }
        }


        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> value[i][j];
            }
        }

        int ureJaa= call(0,0);

        cout<< maxi <<endl;
    }
}
