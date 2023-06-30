#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int ans=0;
    while(n>0){
        int rem=n%10;
        ans+=(rem*rem*rem);
        n=n/10;
    }
    if(ans==temp){
        cout<<"Number Is Armstrong"<<endl;
    }
    else{
        cout<<"Number Is Not Armstrong"<<endl;
    }
}