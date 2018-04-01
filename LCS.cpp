#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int lcs(char *a, char *b, int m, int n){
    if(m==0||n==0)
        return 0;

    if(a[m-1]==b[n-1])
        return 1+lcs(a,b, m-1, n-1);

    return max(lcs(a,b,m-1,n), lcs(a,b,m,n-1));
}

main(){
     char a[1000], b[1000];

     gets(a);
     gets(b);

     cout << lcs(a,b,strlen(a),strlen(b));


}
