#include<bits/stdc++.h>
using namespace std;

int dp[10001];
int call(int n){
    if(dp[n]!=-1)
        return dp[n];

    if(n==1)
        return 0;

    int opt1=99999, opt2=99999, opt3=99999;

    opt1= 1+call(n-1);

    if(n%2==0)
        opt2= 1+call(n/2);

    if(n%3==0)
        opt3= 1+call(n/3);

    return dp[n]=min(min(opt1,opt2), opt3);

}

main(){
    int opt;
    cin >> opt;

    for(int i=0;i<opt;i++){
        memset(dp, -1, sizeof dp);

        int n;

        cin >> n;

        cout<< call(n) << endl;

    }

}
