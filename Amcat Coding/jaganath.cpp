#include<bits/stdc++.h>
using namespace std;
 
void func()
{
    int k;
    cin>>k;
    int ans1=0;
    int ans2=0;
    vector<int> a(k),l(k),r(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    l[0]=a[0];
    r[k-1]=a[k-1];
    for(int i=1;i<k;i++){
        l[i]=l[i-1] + a[i];
    }
    for(int i=k-2;i>=0;i--){
        r[i]=r[i+1] + a[i];
    }
    for(int i=1;i<k-1;i++){
        if(l[i-1]==r[i+1]){
            ans1=i+1;
            ans2=l[i-1];
            break;
        }
    }
    
    cout<<ans1<<" "<<ans2<<endl;
}
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    func();
}