#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int dp[1000][1000];
int call(string a, string b, int m, int n){

    if(m<=0&&n<=0)
        return 0;

    if(dp[m][n]!=-1)
        return dp[m][n];

    int opt1=9999, opt2=9999, opt3=9999, opt4=9999;

    if((m>=1 && n>=1)&&(a[m-1]==b[n-1]))
        opt1= call(a,b,m-1,n-1);      //last characters are same

    else{
        if(m-1>=0&&(n-1>=0))
            opt2= 1+call(a,b,m-1,n-1);      //replace the character in a[]

        if(m-1>=0)
            opt3= 1+call(a,b,m-1,n);    //remove the character in a[]
        if(n-1>=0)
            opt4= 1+call(a,b,m,n-1);    //insert a character in a[]
    }
    int min1= min(opt1,opt2);
    int min2= min(opt3,opt4);

    return dp[m][n]=min(min1,min2);

}

main(){
    int opt;
    cin>> opt;


    for(int k=0; k<opt; k++){


    string a,b;

        for(int i=0; i<1000; i++){
            for(int j=0; j<1000; j++){
                dp[i][j]=-1;
            }
        }

        int m,n;

        cin>> m >> n;

        //getline(cin, a);
        //getline(cin, b);

        cin>> a;
        cin>> b;

        cout<< call(a,b,a.length(),b.length()) <<endl;




    }



}
