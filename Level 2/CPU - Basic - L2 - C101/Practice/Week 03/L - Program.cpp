#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,q;cin>>n>>q;
        string s;cin>>s;
        s='#'+s;
        ll arr[n+1]={};
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='-') arr[i]--;
            else arr[i]++;
            arr[i]+=arr[i-1];
        }
        ll sufMx[n+2]={},sufMn[n+2]={};
        sufMn[n+1]=INT_MAX;sufMx[n+1]=INT_MIN;
        for(int i=n;i>=0;i--)
        {
            sufMx[i]=max(sufMx[i+1],arr[i]);
            sufMn[i]=min(sufMn[i+1],arr[i]);
        }
        ll preMx[n+1]={},preMn[n+1]={};
        for(int i=1;i<=n;i++)
        {
            preMx[i]=max(preMx[i-1],arr[i]);
            preMn[i]=min(preMn[i-1],arr[i]);
        }
        while(q--)
        {
            int l,r;cin>>l>>r;
            if(r==n)
            {
                cout<<preMx[l-1]-preMn[l-1]+1<<'\n';
            }
            else if(l==1)
            {
                cout<<max(0LL,sufMx[r+1]-(arr[r]-arr[l-1]))-min(0LL,sufMn[r+1]-(arr[r]-arr[l-1]))+1<<'\n';
            }
            else
            {
                ll mx=max(preMx[l-1],sufMx[r+1]-(arr[r]-arr[l-1]));
                ll mn=min(preMn[l-1],sufMn[r+1]-(arr[r]-arr[l-1]));
                cout<<mx-mn+1<<'\n';
            }
        }
    }
    return 0;
}
     		  		  				    			  	 	 	
