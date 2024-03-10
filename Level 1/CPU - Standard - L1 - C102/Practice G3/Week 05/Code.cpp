#include <bits/stdc++.h>

using namespace std;


int solve(string p, string q,string s )
{
    int index1,index2,i=0;

    do{
            if(s==p)
               index1=i;
            if(s==q)
                index2=i;

       i++;
    }while(next_permutation(s.begin(),s.end()));

    return abs(index1-index2);

}


int main()
{
   ///problem D
   int n,m;
   cin>>n>>m;
   int song,songcompress;
   int dif[100002];
   long long sum=0;
   for(int i=0 ; i<n ; i++)
   {
       cin>>song>>songcompress;
       dif[i]=song-songcompress;
       sum+=song;
   }
   sort(dif,dif+n,greater<int>());

   int i=0;
   while(sum>m && i<n)
   {
       sum-=dif[i];
       i++;
   }
   
   if(sum>m)
   {
       cout<<-1;
   }
   else
   {
       cout<<i;
   }*/

   /// problem E

  /* int n,k,x;
   cin>>n>>k>>x;
   int sum=0;
   int a;
   for(int i=0 ; i<n-k ; i++)
   {
       cin>>a;
       sum+=a;
   }
   for(int i=n-k ; i<n;i++)
   {
       cin>>a;
       sum+=x;
   }
   cout<<sum;
   */
   /// problem F
 /*  int n,a;
   int amazaing=0;
   int mn,mx;
   cin>>n;
   cin>>a;
   mn=a;
   mx=a;
   for(int i=1 ; i<n ; i++)
   {
       cin>>a;
       if(a<mn)
       {
           amazaing++;
           mn=a;
       }
       else if(a>mx)
       {
           amazaing++;
           mx=a;
       }
   }
   cout<<amazaing;*/

   /// problem G

  /// 1 2 13 44 45 50 105
  /*int puzz[51];
  int n,m;
  cin>>n>>m;
  for(int i=0 ; i<m ; i++)
    cin>>puzz[i];

  sort(puzz,puzz+m);
  int mn=999999999;

  for(int i=0 ; i<m-(n-1);i++)
  {
      mn=min(mn,puzz[i+n-1]-puzz[i]);
  }
  cout<<mn;*/

  /// problem H

 /* int a[5];
  for(int i=0 ; i<4 ; i++)
  {
      cin>>a[i];
  }
  sort(a,a+4);
  int res=0;
  for(int i=1 ; i<4 ; i++)
  {
      if(a[i]==a[i-1])
      {
          res++;
      }
  }
  cout<<res;*/

  /// problem I
 /* int n,a,b;
  cin>>n;
  int tram=0;
  int capacity=0;
  for(int i=0 ; i<n ; i++)
  {
      cin>>a>>b;
      tram-=a;
      tram+=b;
      capacity=max(capacity,tram);
  }
  cout<<capacity;*/



 /// problem J
 /*int n,x;
 cin>>n;
 string p="", q="", s="";
 for(int i=0 ; i<n ; i++)
 {
     cin>>x;
     p+=char(x);
     s+=char(x);
 }
 for(int i=0 ; i<n ; i++)
 {
     cin>>x;
     q+=char(x);
 }
 sort(s.begin(),s.end());

 cout<<solve(p,q,s);*/


 /// problem K
 int n;
 int x;
 cin>>n;
 int mx=0,mn=INT_MAX,mxi,mni;

 for(int i=1 ; i<=n ; i++)
 {
     cin>>x;
     if(x>mx)
     {
        mx=x;
        mxi=i;
     }
     if(x<=mn)
     {
         mn=x;
         mni=i;

     }

 }

 int res=n-mni+mxi-1;
 if(mni<mxi)
    res--;


    cout<<res;













    return 0;
}
