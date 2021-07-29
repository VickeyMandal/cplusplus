#include <bits/stdc++.h> 
#include <iostream>
 
using namespace std;
 
int main(){
    int a[1000] = {0},b[1000] ={0};
    int n,m;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int o = max(n,m);
    int ans[o];
    int i = n-1;
    int j = m-1;
    int k = o-1;
    int carry = 0;
    while(k>=0){
        int sum = carry;
        if(i >= 0){
            sum+=a[i];
        }
        if(j >= 0){
            sum+=b[j];
        }

        int q =sum/10;
        int r = sum%10;
        ans[k] = r;
        carry = q;
        i--;
        j--;
        k--;
    }

    if(carry!=0){
        cout<<carry<<", ";
    }

    for(int l = 0; l<o; l++){
        cout<<ans[l]<<", ";
    }
    cout<<"End";
}