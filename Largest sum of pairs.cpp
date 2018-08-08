#include<bits/stdc++.h>
using namespace std;

int a[1005], k, n;
int call(int i){
    if(i<=0)
        return 0;


    if(a[i]-a[i-1]<k)
        return a[i]+a[i-1]+call(i-2);
    else
        return call(i-1);



}

main(){
    int opt;
    cin>>opt;

    for(int l=0; l<opt; l++){
        cin>>n;

        for(int i=0; i< n; i++)
            cin>>a[i];

        cin>>k;
        sort(a, a+n);

        cout << call(n-1) <<endl;
    }
}
