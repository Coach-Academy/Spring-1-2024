#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// Problem C
    /*int n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<"No";
    }
    else
        cout<<"Yes";*/
    /// O(1), O(1)

    /// Problem E
   /* int a,b,c;
    cin>>a>>b>>c;
    swap(a,b);
    swap(a,c);
    cout<<a<<" "<<b<<" "<<c;*/
    /// O(1) O(1)

    /// Problem F


   /* int n,counter=0;
    cin>>n;
    char c1,c2;
    cin>>c1;
    for(int i=1 ; i<n ; i++)
    {
        cin>>c2;
        if(c1==c2)
        {
            counter++;
        }

        c1=c2;
    }

    cout<<counter;*/
    /// O(n)  ,O(n) -> O(1)

    /// problem G

   /* string s;
    cin>>s;
    sort(s.begin(),s.end());


    for(int i=0 ; i<s.size() ; i++)
    {
        if(int(s[i])>47)
        {
            cout<<s[i];
        if(i!=s.size()-1)
            cout<<"+";
        }
    }*/
    /// O(nlogn),O(n)

    /// Problem H

   /* string s,s2;
    cin>>s;
    s2=s;
    reverse(s2.begin(),s2.end());


    if(s==s2)
    {
        cout<<"Yes\n";
    }
    else
    {


        int c=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
           c++;
        }
        else
            break;


    }

    for(int i=0 ; i<c ; i++)
    {
        s="0"+s;
    }
    s2=s;


    reverse(s2.begin(),s2.end());
    if(s==s2)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    }*/
    ///O(n),O(n)



    /// Problem I

   /* int t,n,d,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int mn=INT_MAX,mn2=INT_MAX,flag=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x<=mn)
            {
                mn2=mn;
                mn=x;
            }
            else if(x<=mn2)
            {
                mn2=x;
            }

            if(x>d)
            {
                flag=1;
            }

        }
        if(flag==0)
        {
           cout<<"YES\n";
        }
        else
        {
            if(mn+mn2<=d)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        /// O(nlogn), O(n) --> O(n), O(1)
    }*/

    /// Problem J

   /* int n;
    cin>>n;
    int a[n];
    long long x,sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>x;
    long long num=(x/sum)*n;

    x=x-(x/sum)*sum;

    for(int i=0 ; i<n ; i++)
    {
        x=x-a[i];
        num++;

        if(x<0)
        {
            break;
        }
    }
    cout<<num;*/

    /// O(n),O(n)

    /// problem K
    int n;
    int left,right,top,bottom,flag=0;
    cin>>n;
    cin>>top;
    bottom=7-top;

    for(int i=0 ; i<n ; i++)
    {
        cin>>left>>right;
        if(left==top || left== bottom || right== top || right==bottom)
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";
    /// O(n),O(1)









    return 0;
}
