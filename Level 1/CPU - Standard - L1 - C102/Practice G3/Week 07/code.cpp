#include <bits/stdc++.h>

using namespace std;

int main()
{
    ///problem B
  /*  int n,d;
    cin>>n>>d;
    deque<int>dq;
    int x;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        dq.push_back(x);
    }
    for(int i=0 ; i<d ; i++)
    {

        dq.push_back(dq.front());
        dq.pop_front();

    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<dq[i]<<" ";
    }*/
    /// O(n)

    /// problem C

    /*int n,x;
    vector<int> one,two,three;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        if(x==1)
        {
            one.push_back(i+1);
        }
        else if(x==2)
        {
            two.push_back(i+1);
        }
        else
        {
            three.push_back(i+1);
        }
    }
    int teams=min(one.size(),min(two.size(),three.size()));
    cout<<teams<<"\n";
    for(int i=0 ; i<teams ; i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
    }*/
    /// O(n)

    /// problem D
    /*int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> dis(n+1);

    for(int i=0 ; i<n ; i++)
        cin>>dis[i];

    int mn=INT_MAX;

    for(int i=0 ; i<s.length()-1 ; i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            int time=(dis[i+1]-dis[i])/2;
            mn=min(mn,time);
        }
    }
    if(mn==INT_MAX)
        cout<<-1;
    else
        cout<<mn;*/

    /// O(n)

    /// Problem E
   /* int n,first,second;
    vector<int> ans;
    cin>>n;
    cin>>first;
    for(int i=1 ; i<n ; i++)
    {
        cin>>second;
        if(second==1)
        {
            ans.push_back(first);
        }
        first=second;
    }
    ans.push_back(first);

    cout<<ans.size()<<"\n";
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }*/
    /// O(n)

    ///problem f
    /*int n,m,x;
    cin>>n>>m;
    deque<int>dq;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        dq.push_back(x);
    }

    int flag=0,f=1;
    while(f)
    {

    f=0;
    for(int i=0 ; i<n ;i++)
    {
        if(dq.front()!=0)
        {
            flag=i;
        }
        dq.push_back(max(0,dq.front()-m));
        dq.pop_front();

        if(dq.back()!=0)
            f=1;
    }
    }
    cout<<flag+1;*/
    /// O(n*(d/m))
   /* int n,num,f=1;
    string s;
    deque<int> dq;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="toFront")
        {
            cin>>num;

            if(f==1)
                dq.push_front(num);
            else
                dq.push_back(num);
        }
        else if(s=="front")
        {
            if(dq.empty())
            {
                cout<<"No job for Ada?\n";
            }
            else
            {
                if(f==1)
                {

                cout<<dq.front()<<"\n";
                dq.pop_front();
                }
                else
                {
                    cout<<dq.back()<<"\n";
                    dq.pop_back();
                }
            }

        }
        else if(s=="back")
        {
            if(dq.empty())
            {
                cout<<"No job for Ada?\n";
            }
            else
            {
                if(f==1)
                {

                cout<<dq.back()<<"\n";
                dq.pop_back();
                }
                else
                {
                    cout<<dq.front()<<"\n";
                    dq.pop_front();
                }
            }

        }
        else if(s=="push_back")
        {
            cin>>num;

            if(f==1)
                dq.push_back(num);
            else
                dq.push_front(num);
        }
        else if(s=="reverse")
        {
            f=!f;

        }



    }*/
    /// O(n)

    /// problem H
    /*int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0, cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(s[i]=='P')
            {
                cnt++;
            }
            else{
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        cout<<mx<<"\n";
    }*/
    /// O(n)

    /// problem i
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        deque<int>dq;
        vector<int>v(n+1,1);
        int a[100002];
        int f=n;

        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        v[n]=0;
        for(int i=n-1 ; i>0 ; i--)
        {
            if(a[i]!=f)
            {
                v[a[i]]=0;
                dq.push_front(a[i]);

            }
            else
            {
                dq.push_front(f);
                v[a[i]]=0;

                while(!dq.empty())
                {
                    cout<<dq.front()<<" ";
                    dq.pop_front();
                }

                for(int j=f ; j>0 ;j--)
                {
                    if(v[j]!=0)
                    {
                        f=j;
                        break;
                    }
                }
            }
        }
        dq.push_front(f);

        while(!dq.empty())
        {
        cout<<dq.front()<<" ";
        dq.pop_front();
        }
        cout<<"\n";
    }
    /// O(n)




    return 0;
}
