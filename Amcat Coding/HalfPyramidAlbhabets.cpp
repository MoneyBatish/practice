#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+65-1)<<" ";
        }
        for(int k=i-1;k>=1;k--){
            cout<<char(k+65-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}