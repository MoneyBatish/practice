#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int ans=0;
    while(n>0){
        int digit=n%10;
        int fact=1;
        while(digit>1){
            fact*=digit;
            digit--;
        }
        ans+=fact;
        n=n/10;
    }
    if(ans==temp){
        cout<<"Number Is strong"<<endl;
    }
    else{
        cout<<"Number Is Not strong"<<endl;
    }
}