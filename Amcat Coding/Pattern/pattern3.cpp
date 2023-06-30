#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<n;
    }
    cout<<endl;
    int count=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n/2;j++){
            cout<<n;
        }
        cout<<count;
        count++;
        for(int k=1;k<=n/2;k++){
            cout<<n;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<n;
    }
}