#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=1;
        while(space<i){
            cout<<" ";
            space++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// ****
//  ***
//   **
//    *