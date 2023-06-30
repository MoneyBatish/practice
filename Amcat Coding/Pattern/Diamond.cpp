#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int c=1;c<=space;c++){
            cout<<" ";
        }
        space--;
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    space=1;
    for(int k=1;k<=n-1;k++){
        for(int c=1;c<=space;c++){
            cout<<" ";
        }
        space++;
        for(int c=1;c<=2*(n-k)-1;c++){
            cout<<"*";
        }
        cout<<endl;
    }
}