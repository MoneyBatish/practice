#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        while(space){
            cout<<" ";
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        for(j=i-1;j>=1;j--){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}