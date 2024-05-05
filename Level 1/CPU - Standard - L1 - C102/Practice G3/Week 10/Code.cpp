#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// problem A
   /* int b,n,m;
    cin>>b>>n>>m;
    int k[n],u[m];
    for(int i=0 ; i<n ; i++)
        cin>>k[i];
    for(int i=0 ; i<m ; i++)
        cin>>u[i];

    int mx=-1;
    for(int i=0; i<n ; i++)
    {

        for(int j=0 ; j<m ; j++)
        {

           if(k[i]+u[j]<=b && k[i]+u[j]>=mx)
           {
               mx=k[i]+u[j];
           }
        }
    }
    cout<<mx<<"\n";*/

    /// problem E

    int n,x,f=1;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        if(x==1)
            f=-1;

    }
    cout<<f;





    /// problem D

   /* int s,n,s1,b1;
    cin>>s>>n;

    vector<pair<int,int>>dragons;

    for(int i=0 ; i<n ; i++)
    {
       cin>>s1>>b1;
       dragons.push_back({s1,b1});
    }

    sort(dragons.begin(),dragons.end());
    int f=0;
    for(int i=0 ; i<n ; i++)
    {
        if(s>dragons[i].first)
        {
            s+=dragons[i].second;
        }
        else
        {

           f=1;
           break;
        }
    }
    if(f)
        cout<<"NO";
    else
        cout<<"YES";*/





    /// problem H

   /* int n,m,x;
    cin>>n>>m;
    vector<int> puzz;
    for(int i=0 ; i<m ; i++)
    {
        cin>>x;
        puzz.push_back(x);
    }
    sort(puzz.begin(),puzz.end());


    int mn=99999999;
    for(int i=0 ; i<=m-n ; i++)
    {
        if(puzz[i+n-1]-puzz[i]<mn)
        {
         mn=puzz[i+n-1]-puzz[i];
        }

    }
    cout<<mn;*/

   /// problem g
    /*int n,x;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    swap(v[0],v[n-1]);
    for(int i=0 ; i<n ; i++)
        cout<<v[i]<<" ";*/
    /// o(nlogn)



    /// problem I
    /*int t,n,k;
    cin>>t;
    while(t--)
    {
        int a[101];
        cin>>n>>k;
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        int i=0;
        while(k>0 && i!=n-1)
        {
        int mn=min(a[i],k);
        a[n-1]+=mn;
        a[i]-=mn;
        k-=mn;
        if(a[i]==0)
            i++;

        }



        for(int i=0 ; i<n ; i++)
            cout<<a[i]<<" ";
        cout<<"\n";

    }*/
    /// o(n)
    /// problem J
    /*string s;
    cin>>s;
    int c=s.find('0');
    if(c==-1)
    {
        cout<<s.substr(1)<<endl;
    }
    else
    {
        cout<<s.substr(0,c)<<s.substr(c+1,s.length())<<endl;
    }*/
    /// O(n)


    /// problem K
    /*int t;
    cin>>t;
    while(t--)
    {
        int n,mn,mx,c=0;
        cin>>n;
        int a[n+1];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }


        for(int i=0 ; i<n-1 ; i++)
        {
            if(a[i]>a[i+1] || a[i+1]>a[i])
            {
               mx=max(a[i],a[i+1]);
               mn=min(a[i],a[i+1]);
            }
            while(mx>2*mn)
            {
                mx=ceil(mx*1.0/2.0);
                c++;

            }
        }
        cout<<c<<"\n";
    }*/
    /// O(nlogn)

  /// problem L
  /*int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      int a[n],b[n],k=0;

      for(int i=0 ; i<n ; i++)
        cin>>a[i];
      for(int i=0 ; i<n ; i++)
        cin>>b[i];

      int flag=0;
      for(int i=0 ; i<n ; i++)
      {
          if(a[i]>b[i])
          {
              flag=1;
              break;
          }
          else if(k==0 && a[i]<b[i])
          {
              k=b[i]-a[i];
              a[i]=b[i];

          }
           else if(k)
          {
              if(a[i]==b[i])
                break;
              a[i]+=k;
          }
      }

      for(int i=0 ; i<n ; i++)
      {
         // cout<<a[i]<<" "<<b[i]<<"\n";
          if(a[i]!=b[i])
          {
              flag=1;
              break;
          }
      }
      if(flag)
      {
          cout<<"NO\n";
      }
      else
      {
          cout<<"YES\n";
      }
  }
*/






return 0;
    }


