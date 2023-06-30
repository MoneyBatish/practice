#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        int space=n/2+1-i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2;j++){
            cout<<" ";
        }
        for(int k=n/2+1;k>i;k--){
            cout<<"*";
        }
        cout<<endl;
    }

}
//    *
//   **
//  ***
// *******
//    ***
//    **
//    *