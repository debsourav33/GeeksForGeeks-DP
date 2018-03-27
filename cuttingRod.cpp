#include<bits/stdc++.h>
using namespace std;

int price[]= {0,3,5,8, 9,10,17,17,20};
int dp[100][100];

int call(int i, int length){
    int maxi=0;

    if((length==0)||(i>length))
        return 0;

    int ret1=0, ret2=0;

    if(length-i>=0){
        ret1=price[i]+call(i, length-i);
    }

    ret2= call(i+1, length);

    return max(ret1,ret2);


}

//Little thinking is bliss here

main(){
    for(int i=0;i<100;i++)
        memset(dp[i],-1,sizeof dp[i]);

    printf("%d",call(1,8));


}
