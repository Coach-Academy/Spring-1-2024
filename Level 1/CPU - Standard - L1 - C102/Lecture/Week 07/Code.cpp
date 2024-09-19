#include <bits/stdc++.h>


using namespace std;

int main()
{
    /// array
   /* int a[5];

    0 0 0 0 0
    cout<<a[2];

    int a[4]
    0 0 0 0

    int a[6];
    0 0 0 0 0 99


    cin>>a[2];

    0 0 99 0 0*/

    ///vector

   // vector<int> v; // empty

   /* vector<int> v(10);

    for(int i=0 ; i<2 ; i++)
    {
        v[i]=3;
    }

    for(int i=0 ; i<10 ; i++)
    {
        cout<<v[i]<<" ";
    }*/

    /*int n,x;
    cin>>n;
    vector<int> v;


    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }


   /* for(auto x:v)
    {

        x++;
        cout<<x<<" ";
    }*/

    /*cout<<v.size()<<"\n";
    if(!v.empty())
    {
        cout<<"Not empty\n";
    }*/
/*
    v.clear();

    cout<<v.size()<<"\n";

    if(v.empty())
    {
        cout<<"empty";
    }*/
   /* cout<<*(v.begin());

    v.erase(v.begin()+3);
    v.insert(v.begin()+3,100);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

    swap(v,v2);

    v.swap(v2);*/

    /*vector<int>::iterator it=v.begin();
    while(it != v.end())
    {
        cout<<*(it);
        it++;
    }*/

   /* vector<int>:: reverse_iterator it=v.rbegin();
    while(it!=v.rend())
    {
        cout<<*(it)<<" ";
        it++;
    }*/

    /// deque

   // deque <int> dq;

   /// Problem Array
   int n,x,neg=0,pos=0;
   vector<int> zeros;

   cin>>n;
   for(int i=0 ; i<n ;i++)
   {
       cin>>x;
       if(x<0 && neg==0)
       {
           neg=x;
       }
       else if(x>0 && pos==0)
       {
           pos=x;
       }
       else
       {
           zeros.push_back(x);
       }


   }

   if(pos!=0)
   {
   cout<<1<<" "<<neg<<"\n";
   cout<<1<<" "<<pos<<"\n";
   cout<<zeros.size();
   for(int i=0 ; i<zeros.size() ; i++)
   {
       cout<<" "<<zeros[i];
   }
   }
   else
   {
       vector<int> ppos;
       vector<int> z;
       for(int i=0 ; i<zeros.size() ; i++)
       {
           if(zeros[i]<0 && ppos.size()<2)
           {
               ppos.push_back(zeros[i]);
           }
           else
           {
             z.push_back(zeros[i]);
           }
       }
       cout<<1<<" "<<neg<<"\n";
       cout<<2<<" "<<ppos[0]<<" "<<ppos[1]<<"\n";
       cout<<z.size();
       for(int i=0 ; i<z.size() ; i++)
       {
           cout<<" "<<z[i];
       }

   }
   ///O(n)













    return 0;
}
