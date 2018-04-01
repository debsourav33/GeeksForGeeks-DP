#include<bits/stdc++.h>
using namespace std;
void permutation(char *a, int i, int n){
    if(i==n){
        printf("%s\n",a);
        return;
    }

    for(int j=i; j<n;j++){
        swap(a[i],a[j]);
        permutation(a,i+1,n);
        swap(a[i],a[j]);

    }

}

main(){
    char s[1000];
    gets(s);

    permutation(s,0,strlen(s));




}
