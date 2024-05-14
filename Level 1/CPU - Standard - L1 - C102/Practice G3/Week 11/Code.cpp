#include<bits/stdc++.h>

using namespace std;



/// probelm A
/*
vector<int> a;
int solve(int i)
{
    if(i==a.size())
    {
        return 0;
    }

    return solve(i+1)+a[i];
}*/
/// O(n)

/// problem C
/*int solve2(long long num)
{

    if(num<10)
    {
        return num;
    }

    int temp=0;
    while(num)
    {
       temp+=num%10;
       num/=10;
    }

    return solve2(temp);
}*/

/// problem D
/*
int solve3(int numCrates, int loadSize)
{
    if(numCrates<=loadSize)
        return 1;

    if(numCrates%2==1)
       return  solve3(numCrates/2+1,loadSize)+solve3(numCrates/2,loadSize);
    else
        return 2*solve3(numCrates/2,loadSize);

}*/
/// O(2^(n/2))
/*
vector<int>a,b;
int solve4(int i)
{
    if(i==a.size())
        return 0;


    return solve4(i+1)+a[i]*b[i];

}*/
/// O(n)
/*
vector<pair<int,int> >x;
int s,d,n;
int solve5(int i)
{
    if(i==n)
       return 0;

    if(x[i].first<s && x[i].second>d)
        return 1;
    else
        return solve5(i+1);
}*/

/// problem G
/*
string s;
bool solve6(int i)
{
    if(i==s.size())
        return true;

    if((i%2==1 && (s[i]>='a' && s[i]<='z'))||(i%2==0 && (s[i]>='A' && s[i]<='Z')) )
       return false;
    else
      return solve6(i+1);

}*/

/// problem H
/*
vector<int>a,b,c;
int n;
int mn=INT_MAX;

void solve7(int i)
{
    if(i==n)
        return ;

    if(c[i]>a[i])
        mn=min(mn,b[i]);

    solve7(i+1);
}*/

/// problem I
/*
vector<int>a;
int x;

void solve8(int i)
{
    if(i==a.size())
        return;

    if(a[i]!=x)
        cout<<a[i]<<" ";

    solve8(i+1);
}*/

/// problem J
/*
string x;
void solve9(int i)
{
    if(i==x.length())
        return ;


    if(x[i]=='.')
        return ;

    cout<<x[i];
    return solve9(i+1);

}*/

/// problem K

int n,sum=0;
void solve10(int i)
{
    sum+=i;
    if(sum>=n)
    {
        cout<<i;
        return ;
    }
    solve10(i+1);
}




int main()
{
    /// probelm A
   /* int t,n,x;
    cin>>t;
    for(int i=1 ; i<= t ; i++)
    {
        cin>>n;
        for(int j=0 ; j<n ; j++)
        {
            cin>>x;
            a.push_back(x);
        }

        cout<<"Case "<<i<<": "<<solve(0)<<"\n";

        a.clear();


    }*/

    /// problem C
   /* string n;
    int k;
    long long num=0;

    cin>>n>>k;
    for(int i=0 ; i<n.length() ; i++)
    {
          num+=n[i]-'0';
    }
    num*=k;

    cout<<solve2(num)<<"\n";
      */

      /// problem D
      /*int numCrates,loadSize;
      while(cin>>numCrates>>loadSize)
      {

          cout<<solve3(numCrates,loadSize)<<"\n";

      }*/

      /// problem E

     /* int n,x;
      cin>>n;
      for(int i=0 ; i<n ; i++)
      {
          cin>>x;
          a.push_back(x);
      }
      for(int i=0 ; i<n ; i++)
      {
          cin>>x;
          b.push_back(x);
      }

      if(solve4(0))
      {
          cout<<"No";
      }
      else
      {
          cout<<"Yes";
      }*/

      /// problem F

      /*cin>>n>>s>>d;
      int xx,yy;

      for(int i=0 ; i<n ; i++)
      {

          cin>>xx>>yy;
          x.push_back({xx,yy});
      }

      if(solve5(0))
      {
          cout<<"Yes";
      }
      else
        cout<<"No";*/


        /// problem G
      /*  cin>>s;
        if(solve6(0))
            cout<<"Yes";
        else
            cout<<"No";*/



    /// problem H
   /* int aa,bb,cc;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>aa>>bb>>cc;
        a.push_back(aa);
        c.push_back(cc);
        b.push_back(bb);
    }
    solve7(0);

    if(mn==INT_MAX)
        cout<<-1;
    else
        cout<<mn;*/

        /// problem I
        /*int n,aa;
        cin>>n>>x;
        for(int i=0 ; i<n ; i++)
        {
            cin>>aa;
            a.push_back(aa);
        }
        solve8(0);*/

        /// problem J
        /*cin>>x;
        solve9(0);*/

        /// problem k
        cin>>n;
        solve10(0);





    return 0;
}
