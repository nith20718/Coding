#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p = new int;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        *(p+i)=x;
    }
    int ans = *p;
    for(int i=0;i<n;i++)
        ans = max(ans,*(p+i));
    cout<<ans;
    return 0;
}