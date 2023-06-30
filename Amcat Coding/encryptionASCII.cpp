#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    for(auto i:s)
    {
        i='a'+(i-'a'+(i%26))%26;
        cout<<i;
    }
}