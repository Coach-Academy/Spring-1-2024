#include <bits/stdc++.h>

using namespace std;


int main()
{

  /// problem A
 /* string s;
  cin>>s;
  set<char> st;
  for(int i=0  ;i<s.length(); i++)
  {
      st.insert(s[i]);
  }

  if(st.size()%2==0)
  {
      cout<<"CHAT WITH HER!";
  }
  else
  {
      cout<<"IGNORE HIM!";
  }*/
  ///O(nlogn)

  /// problem B
 /* string s;
  getline(cin,s);
  set<char>st;

  for(int i=0 ; i<s.length(); i++)
  {
      st.insert(s[i]);
  }

  if(st.size()>=5)
  cout<<st.size()-4;
  else
  {
      cout<<st.size()-2;
  }*/

  /// problem C
 /* int t;
  cin>>t;
  string s1,s2;
  while(t--)
  {
      cin>>s1>>s2;
      set<char>st;
      for(int i=0 ; i<s1.length() ; i++)
      {
          st.insert(s1[i]);
      }
      int f=0;
      for(int i=0 ; i<s2.length() ; i++)
      {
          if(st.find(s2[i])!=st.end())
          {
              f=1;
              break;
          }
      }
      if(f)
      {
          cout<<"YES\n";
      }
      else{
        cout<<"NO\n";
      }



  }*/
  /// O(nlogn)

  /// problem D

 /* char c;
  cin>>c;
  string s1,s2;
  s1="qwertyuiopasdfghjkl;zxcvbnm,./";
  cin>>s2;
  map<char,char>mp;
  if(c=='R')
  {
      for(int i=1 ; i<s1.size() ; i++)
      {
          mp[s1[i]]=s1[i-1];
      }
  }
  else{
     for(int i=0 ; i<s1.size()-1 ; i++)
      {
          mp[s1[i]]=s1[i+1];
      }
  }
  for(int i=0 ; i<s2.length() ; i++)
      {
          cout<<mp[s2[i]];
      }*/

      /// problem f
     /* int n,m,x,y;
      cin>>n>>m;
      set<int>st;
      for(int i=0 ; i<n ; i++)
      {
          cin>>x;
          for(int j=0 ; j<x ;j++)
          {
              cin>>y;
              st.insert(y);
          }
      }
      if(st.size()==m)
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NO";
      }*/
      /// O(n^2logn)

      /// problem G
     /* int n;
      cin>>n;

      string s[n+1];
      for(int i=0 ; i<n ; i++)
        cin>>s[i];

      map<string,int>mp;

      for(int i=n-1 ; i>=0 ; i--)
      {
          if(mp[s[i]]==0)
          {
              cout<<s[i]<<"\n";
              mp[s[i]]=1;
          }
      }*/
      /// O(nlogn)

      /// problem I

     /* int q;
      cin>>q;
      while(q--)
      {
          int n,r,x;
          cin>>n>>r;
          set<int>st;
          for(int i=0 ; i<n ; i++)
          {
            cin>>x;
            st.insert(x);
          }
          int cnt=0,dist;
          auto itr=st.rbegin();
          while(itr!=st.rend())
          {
              dist=cnt*r;
              if(*itr-dist<=0)
              {
                  break;
              }
              else
              {
              cnt++;
              itr++;
              }
          }
          cout<<cnt<<"\n";

      }*/
      /// O(nlogn)

      /// problem j
      int q,x,m;
      cin>>q;
      set<int> mono;
      set<pair<int,int>>poly;
      map<int,int>mp;
      int cnt=0;
      while(q--)
      {
          cin>>x;
          if(x==1)
          {
              cnt++;
              cin>>m;
              mono.insert(cnt);
              poly.insert({m,cnt*-1});
              mp[cnt]=m;
          }
          else if(x==2)
          {
              int customer= *(mono.begin());
              cout<<customer<<" ";
              mono.erase(customer);
              poly.erase({mp[customer],-customer});
              mp.erase(customer);
          }
          else
          {
             pair<int,int> customer=*(poly.rbegin());
             cout<<customer.second*-1<<" ";
             poly.erase(customer);
             mono.erase(customer.second*-1);
             mp[customer.second*-1];

          }
      }
      /// O(nlogn)






return 0;

    }
