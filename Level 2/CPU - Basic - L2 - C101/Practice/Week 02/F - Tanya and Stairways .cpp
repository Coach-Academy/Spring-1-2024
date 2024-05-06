#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<=arr[i])
        {
            ans.push_back(arr[i]);
        }
    }
    ans.push_back(arr[n-1]);
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<' ';
    }
}
