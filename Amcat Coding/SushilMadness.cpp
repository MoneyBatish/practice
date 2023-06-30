#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,r,ans=0;
    cin>>r;
    vector<int> a(r);
    for(int i=0;i<r;i++){
    cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            ans+=a[j];
        }
    }
    for(int i=4;i<r;i++){
        ans+=(a[i]+a[i-1]+a[i-2]+a[i-3]);
    }
    cout<<ans%m;
}