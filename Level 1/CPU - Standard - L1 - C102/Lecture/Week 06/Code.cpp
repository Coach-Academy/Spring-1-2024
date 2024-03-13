#include <bits/stdc++.h>

using namespace std;



int main()
{

    /// time complexity
  /*int a;
  cin>>a;
  a+=10;
  cout<<a;*/
  /// O(1)

    /*int n;
    cin>>n;
      for(int i=1 ; i<n ; i*=2)
        cout<<i<<" ";*/

    ///O(log2(n))


     /* int a;
  cin>>a;
  for(int i=0 ; i<a ; i++)
      cout<<i<<" ";*/

  ///O(n)

  /*int n;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      for(int j=0 ; j<n ; j++)
      {
          cout<<i*j<<" ";
      }
  }*/

  /* int n;
    cin>>n;
    for(int j=0 ; j<n ; j++)
      for(int i=1 ; i<n ; i*=2)
        cout<<i<<" ";*/

    /// O(nlogn)

  ///O(n^2)

   /* int n,m;
  cin>>n>>m;
  for(int j=0 ; j<n ; j++)
    for(int j=0 ; j<m ; j++)
     cout<<j<<" ";

  for(int k=0 ; k<n ; k++)
    cout<<k;*/

    ///O(n*m)

  /*int n;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      for(int j=0 ; j<n ; j++)
      {
          for(int k=0 ; k<n ; k++)
            cout<<i*j*k<<" ";
      }
  }*/
  /// O(n^3)

  ///O(2^n)



  /// space complexity
 /* int n;
  cin>>n;
  /// O(1)
  int a[n];
  ///O(n)
  int a[n][n];
  /// O(n^2)
  int a[n][m];
  /// O(n*m)
  /// O(n*m+n^2)

  cin>>a;
  cout<<a;*/

 /* for(int i=0 ; i<n ; i++) ///O(n)
    pow(i,2) /// O(n)

    //O(n^2)*/

  /// problem Children and Candies (ABC Edit)
 /* int n,res=0;
  cin>>n;
  /*for(int i=1 ; i<=n ; i++)
  {
      res+=i;
  }*/
  /// O(n)
  //cout<<(n*(n+1))/2;
  /// O(1)

  /// problem Calculating Function

  /*-1 +2 =1
  -1+2-3 = -2
  -1+2-3+4 = 2
  -1+2-3+4-5 = -3
  -1+2-3+4-5+6 = 3*/

 /*long long n;
 cin>>n;
 if(n%2==0)
    cout<<n/2<<"\n";
 else
   cout<<-(n+1)/2<<"\n";*/
 /// O(1)

 /// problem Again Twenty Five!

 long long int n;
 cin>>n;
 cout<<25;
 
 /// O(1)












    return 0;
}
