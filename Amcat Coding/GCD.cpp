#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}
int gcdFor(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int ans=lcm(a,b);
    cout<<ans<<endl;
}