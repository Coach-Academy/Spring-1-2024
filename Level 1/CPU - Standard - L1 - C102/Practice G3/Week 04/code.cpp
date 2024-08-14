#include <bits/stdc++.h>


using namespace std;

int main()
{


   /// problem B
   /*
   int n,a,b;
   int d[102];
   cin>>n;
   for(int i=0 ; i<n-1 ; i++)
   {
       cin>>d[i];
   }
   cin>>a>>b;
   a--;
   b--;
   int res=0;
   for(int i=a ; i<b ; i++)
   {
       res+=d[i];
   }
   cout<<res;*/

   /// Problem D

  /* int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[150002];
       for(int i=0 ; i<n ; i++)
        cin>>a[i];

       int mn=a[n-1];
       int bad=0;
       for(int i=n-1 ; i>=0 ; i-- )
       {
           if(a[i]<=mn)
           {
               mn=a[i];
           }
           else{
            bad++;
           }
       }

     cout<<bad<<"\n";
   }*/

   /// problem f
  /* int n,first,second,res=1;
   cin>>n;
   cin>>first;
   for(int i=1 ; i<n ; i++)
   {
       cin>>second;
       if(first!=second)
       {
           res++;
       }
       first=second;
   }
   cout<<res;*/

   /// problem H
  /* int n;
   cin>>n;
   int wires[n];
   for(int i=0; i<n ; i++)
    cin>>wires[i];

   int m,x,y;
   cin>>m;
   for(int i=0 ; i<m ; i++)
   {
       cin>>y>>x;
       y--;

       if(y<n-1)
       {
           wires[y+1]+=wires[y]-x;
       }
       if(y>0)
       {
           wires[y-1]+=x-1;
       }

       wires[y]=0;

   }

   for(int i=0 ; i<n ; i++)
    cout<<wires[i]<<"\n";*/

     /// problem I
 /* int a[3][3];
  int b[3][3];

  for(int i=0 ; i<3 ; i++)
  {
      for(int j=0 ; j<3 ; j++)
      {
          cin>>a[i][j];
      }
  }
  int clicks;
  for(int i=0 ; i<3 ; i++)
  {
      for(int j=0 ; j<3 ; j++)
      {
          clicks=a[i][j];

          if(i>0)
          {
              clicks+=a[i-1][j];
          }
          if(i<2)
          {
              clicks+=a[i+1][j];
          }
          if(j>0)
          {
              clicks+=a[i][j-1];
          }
          if(j<2)
          {
              clicks+=a[i][j+1];
          }

          if(clicks%2==1)
          {
              b[i][j]=0;
          }
          else
          {
              b[i][j]=1;
          }
      }
  }

  for(int i=0 ; i<3 ; i++)
  {
      for(int j=0 ; j<3 ; j++)
      {
          cout<<b[i][j];
      }
      cout<<"\n";
  }*/


  /// problem j
 /* string s;
  cin>>s;
  if(s[0]>='a' && s[0]<='z')
  {
      s[0]-=32;
  }
  cout<<s;*/


  ///problem l

 /* int t;
  cin>>t;
  while(t--)
  {
      string b;
      string a="";
      cin>>b;

      if(b.size()==2)
      {
          cout<<b<<"\n";
      }
      else
      {
      for(int i=0 ; i<b.size() ; i+=2)
      {
          a+=b[i];
      }
      a+=b[b.size()-1];
      cout<<a<<"\n";
      }
  }*/

  /// problem N

  /*string s;
  getline(cin,s);
  sort(s.begin(),s.end());
  if(s=="{}")
    cout<<0;
  else
  {
      int counter=1;

      for(int i=0 ; i<s.size()-1; i++)
      {
          if(s[i]!=s[i+1] && s[i]>='a' && s[i]<='z' && s[i+1]>='a' && s[i+1]<='z')
            counter++;

      }
      cout<<counter;

  }*/

  /// problem P

 /* int n,k;
  cin>>n>>k;
  string s;
  int counter=0;
  for(int i=0 ; i<n ; i++)
  {
      cin>>s;

      int flag=1;

      for(int j=0 ; j<=k ; j++)
      {
          flag=0;
          for(int l=0 ; l<s.size() ; l++)
          {
              if(j==int(s[l])-48)
              {
                  flag=1;
                  break;
              }
          }

          if(flag==0)
          {
              break;
          }
      }



    if(flag==1)
    {
        counter++;
    }


  }
  cout<<counter;*/

  /// problem R
  int n;
  cin>>n;
  string s;
  int check[100]={0};
  cin>>s;

      for(int i=0 ; i<n ; i++)
      {
          if(s[i]>='a' && s[i]<='z')
             s[i]-=32;

            
        check[int(s[i])]=1;

      }
      int flag=1;
      for(int i=65 ; i<=90 ; i++)
      {
          if(check[i]==0)
          {
              flag=0;
              break;
          }
      }
      if(flag==1)
      {
          cout<<"Yes";
      }
      else
        cout<<"No";














    return 0;
}
