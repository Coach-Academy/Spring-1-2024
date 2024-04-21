#include<bits/stdc++.h>

using namespace std;

int main()
{
   /// Problem A
   /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t,n,number;
   queue<int>q;
   cin>>t;
   while(t--)
   {
       cin>>number;
       if(number==1)
       {
           cin>>n;
           q.push(n);
       }
       else if ( number == 2)
       {
           if(!q.empty())
           {
               q.pop();
           }
       }
       else{
        if(!q.empty())
        {
            cout<<q.front()<<"\n";
        }
        else
        {
            cout<<"Empty!\n";
        }
       }
       }*/

       ///O(n)

       /// problem D
      /* int n;
       string s;
       cin>>n;
       while(n--)
       {
          stack<char>st;
          cin>>s;
          int f=1;
          for(int i=0 ; i<s.length(); i++)
          {
              if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                    {
                        st.push(s[i]);
                    }
                    else{
                        if(st.empty())
                            {
                                f=0;
                                break;
                            }


                        if((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{'))
                        {
                            st.pop();
                        }
                        else
                        {
                            f=0;
                            break;
                        }
                    }
          }

          if(f && st.empty())
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }



       }*/
       ///O(n)


       /// problem E
      /* int n,m,x;
       cin>>n>>m;

       queue<pair<int,int> >q;

       for(int i=1 ; i<=n ; i++)
       {
           cin>>x;
           q.push({x,i});
       }
       int value;
       while(q.size()>1)
       {
           value=q.front().first-m;
           if(value>0)
           {
               q.push({value,q.front().second});
           }
           q.pop();
       }
       cout<<q.front().second;*/
       /// O((maxelemnt/m)   + (n))

       ///problem F
     /*  string s="",tmp;
       stack<string>history;
       history.push(s);
       int q,k,op;
       cin>>q;
       while(q--)
       {
           cin>>k;

           if(k==1)
           {
               cin>>tmp;
               s+=tmp;
               history.push(s);
           }
           else if (k==2)
           {

               cin>>op;
               s=s.substr(0,s.size()-op); /// O(n)
               history.push(s);

           }
           else if(k==3)
           {
               cin>>op;
               cout<<s[op-1]<<"\n";
           }
           else{
                if(!history.empty())
                {
            history.pop();
            s=history.top();
                }
           }
       }*/
       /// O(n^2)

       /// problem G

     /*  string s;
       cin>>s;
       stack<char> st;
       for(int i=0 ; i<s.length() ; i++)
       {
           if(st.empty())
           {
               st.push(s[i]);
           }
           else if(s[i]==st.top())
           {
               st.pop();
           }
           else
           {
               st.push(s[i]);
           }
       }
       if(st.empty())
       {
           cout<<"Yes";
       }
       else
       {
           cout<<"No";
       }*/

       
       /// O(n)
       int t,x,num;
       cin>>t;
       queue<int>q;
       priority_queue<int, vector<int>, greater<int> >pq;

       while(t--)
       {
           cin>>x;

           if(x==1)
           {
               cin>>num;
               q.push(num);
           }
           else if (x==2)
           {
               if(!pq.empty())
               {
                   cout<<pq.top()<<"\n";
                   pq.pop(); ///O(logn)
               }
               else
               {
                   cout<<q.front()<<"\n";
                   q.pop();
               }

           }
           else {
            while(!q.empty())
            {
                pq.push(q.front());
                q.pop();
            }
           }
           ///O(nlogn)



       }














    return 0;
}

