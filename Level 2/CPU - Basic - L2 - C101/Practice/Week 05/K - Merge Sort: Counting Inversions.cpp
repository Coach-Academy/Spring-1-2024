#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans;
void merge(int s[],int l,int mid,int r)
{
    int sz1=mid-l+1;
    int sz2=r-mid;
    vector<int>L(sz1),R(sz2);
    for(int i=0;i<sz1;i++)
    {
        L[i]=s[l+i];
    }
    for(int i=0;i<sz2;i++)
    {
        R[i]=s[mid+i+1];
    }
    int i=0,j=0,k=l;
    while(i<sz1&&j<sz2)
    {
        if(L[i]<=R[j])
        {
            s[k]=L[i];
            i++;
        }
        else
        {
            s[k]=R[j];
            j++;
            ans+=sz1-i;
        }
        k++;
    }
    while(i<sz1)
    {
        s[k]=L[i];
        i++;
        k++;
    }
    while(j<sz2)
    {
        s[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int s[],int l,int r)
{
    if(r>l)
    {
        int mid=l+r>>1;
        merge_sort(s,l,mid);
        merge_sort(s,mid+1,r);
        merge(s,l,mid,r);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ans=0;
        merge_sort(s,0,n-1);
        cout<<ans<<'\n';
    }
    return 0;
}
