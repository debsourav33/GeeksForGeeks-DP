#include<bits/stdc++.h>
using namespace std;

int value[10000], n;

int call(int i){
    if (i>=n)
        return 0;

    int maxi= 1;

    for(int j=i+1;j<n;j++){
         if(value[j]>value[i]){

            if(1+call(j)>maxi)
                maxi=1+call(j);
         }
    }

    return maxi;


}

main(){
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> value[i];
    }

    cout<< call(0) << endl;



}
