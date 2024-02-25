#include <bits/stdc++.h>

using namespace std;

int main()
{
    ///problem A
    /*int n,res=0;
    cin>>n;
   /* for(int i=1 ; i<=n; i++)
    {
       res+=i;
    }*/



   /* res=n*(n+1)/2;

    cout<<res;*/

    ///problem B

   /* int p;
    for(int i=1 ; i<=26 ; i++)
    {
        cin>>p;
        cout<<char(p+96);
    }*/

    ///problem C
   /* int n,p,q,rooms=0;

    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>p>>q;

        if(q-p>=2)
        {
            rooms++;
        }
    }
    cout<<rooms;*/

    /// problem D
    /*int n,x=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="X++" || s=="++X")
        {
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;*/

  ///problem E
  /*int a,b,years=0;
  cin>>a>>b;

  while(b>=a)
  {
     a*=3;
     b*=2;
     years++;

  }
  cout<<years;*/

  /// problem f
  /*int n,p,v,t,num=0;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>>p>>v>>t;
      if(p+v+t>=2)
      {
          num++;
      }
  }
  cout<<num;*/

  /// problem G
  /*int n,k;
  cin>>n>>k;
  for(int i=0 ; i<k ;i++)
  {
      if(n%10==0)
      {
          n/=10;
      }
      else
      {
          n--;
      }
  }
  cout<<n;*/

  /// problem H
 /* int d,res=0;

  for(int i=0 ; i<5 ; i++)
  {
      for(int j=0 ; j<5 ; j++)
      {
          cin>>d;
          if(d==1)
          {
             if(i>=2)
             {
                 res+=(i-2);
             }else
             {
                 res+=(2-i);
             }

             if(j>=2)
             {
                 res+=(j-2);
             }else
             {
                 res+=(2-j);
             }


          }
      }
  }
  cout<<res;

   */

   /// problem I
  /* int n,levels=0,i=1,res=0;
   cin>>n;
   while(n>=0)
   {

       res+=i;
       n-=res;
       levels++;
       i++;
   }
   levels--;
   cout<<levels;*/

   /// problem J
 /*  int n,x,four=0,three=0,two=0,one=0;
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       if(x==4)
        four++;
       else if(x==3)
        three++;
       else if(x==2)
        two++;
       else
        one++;
   }
   int cars=four;
   cars+=three;
   if(three>=one)
   {
       one=0;
   }
   else{
    one-=three;
   }

   cars+=two/2;
   two=two%2;

   if(one<=2)
   {
       if(one>0 || two>0)
        cars++;
   }
   else{
    if(two==1)
    {
        cars++;
        one-=2;
    }

    cars+=one/4;

    if(one%4!=0)
    {
        cars++;
    }
   }
   cout<<cars;
*/

/// problem k

   /*int n,x,digit,flag;
   cin>>n;
   for(int i=1 ; i<=n ;i++)
   {
       if(n%i==0)
       {
           x=i;
           flag=0;
   while(x!=0)
   {
       digit=x%10;
       if(digit==7 || digit==4)
       {
           flag=1;
       }
       else
       {
           flag=0;
           break;
       }
       x/=10;
   }
   if(flag==1)
   {
       cout<<"YES";
       break;
   }
   else
   {
       continue;
   }
       }
   }
   if(flag==0)
    cout<<"NO";*/
   /* for(int i=1 ;i<5 ; i++)
    {
        for(int j=1  ; j<=i ; j++)
            cout<<i;
        cout<<"\n";
    }*/

    cout<<ceil(1/2);




    return 0;
}
