#include<bits/stdc++.h>
using namespace std;

int value[100];
int call(int target, int i){


    if(target==0)
        return 1;

    else if(i<0)
        return 0;

    int ret1=0, ret2=0;

    if(target-value[i]>=0)
        ret1= call(target-value[i], i+1);

    ret2= (target, i+1);

    return ret1||ret2;

}

main(){

    int n, target;

    cin>>n;

    for(int i=0;i<n;i++)
        cin >> value[i];

    cin>> target;

    cout<< call(target, n-1) << endl;


}
