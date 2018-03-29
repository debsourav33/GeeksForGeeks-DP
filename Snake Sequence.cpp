#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int n, value[1000][1000];

int call(int i, int j){
    if((i==n-1)&(j==n-1))
        return 1;

    int ret1=0, ret2=0;

    if((i<n-1)&& abs(value[i+1][j]-value[i][j])==1)
        ret1= call(i+1,j);

    if((j<n-1)&& abs(value[i][j+1]-value[i][j])==1)
        ret2= call(i, j+1);

    return 1+max(ret1, ret2);
}

main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> value[i][j];
        }
    }

    cout << call(0,0) <<endl;

}
