/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int pop(int **s, int i,int j){
    if(i==j)
    cout<<"A"<<i;
    else{
        cout<<"(";
        pop(s,i,s[i][j]);
        pop(s,s[i][j]+1,j);
        cout<<")";
    }

    return 0;
}
int main()
{
    int n;
    cout<<"Enter the length of matrix"<<endl;
    cin>>n;
    int p[n];
    cout<<"Enter matrix element"<<endl;
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    int m[n-1][n-1];
    int s[n-1][n-1];
    for (int i=1;i<=n;i++){
        m[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++){
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j]){
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
    
    pop(**s,1,n-1);
    return 0;
}
