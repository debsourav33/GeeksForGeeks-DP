#include<bits/stdc++.h>
using namespace std;

int call(int *a, int n){

    int maxi=-999999;
    int maxSoFar= 0;

    for(int i=0;i<n;i++){
        maxSoFar= maxSoFar+a[i];

        maxi= max(maxi, maxSoFar);

        if(maxSoFar<0)
            maxSoFar= 0;


    }

    return maxi;
}

int kadane(int *a, int n){

    int curMax=a[0];
    int  gMax=a[0];

    for(int i=1;i<n;i++){
        curMax= max(curMax+a[i],a[i]);
        gMax= max(gMax, curMax);


    }

    return gMax;



}

main(){
    int opt;

    cin>>opt;

    for(int k=0;k<opt;k++){

        int n, a[10000];
        cin >> n;

        for(int i=0;i<n;i++)
            cin >> a[i];

        cout<< kadane(a,n) << endl;
    }


}
