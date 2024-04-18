#include<bits/stdc++.h>
using namespace std;



int main()
{
    /// stack
    /*stack<int>st;
    stack<int>st2;

    //vector<int> v(4,4);

    for(int i=0 ; i<5 ; i++)
        st.push(i);

    cout<<st.size()<<"\n";
    while(!st.empty())
    {
        cout<<st.top()<<"\n";
        st2.push(st.top());
        st.pop();
    }/*
    while(!st2.empty())
    {
        cout<<st2.top()<<"\n";
        st.push(st2.top());
        st2.pop();
    }
    cout<<st.size()<<"\n";
    cout<<st2.size();
*/
    /// queue
   /* queue<int> q,q2;

    for(int i=0 ; i<5 ; i++)
        q.push(i);

    cout<<q.size()<<"\n";

    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q2.push(q.front());
        q.pop();
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q.push(q2.front());
        q2.pop();
    }
    cout<<q2.size()<<"\n";*/
    /// priority queue

   /* priority_queue<int, vector<int>, greater<int> >pq;

    pq.push(5);
    pq.push(10);
    pq.push(1);
    pq.push(-1);
    pq.push(100);
   /* cout<<pq.top()<<"\n";
   // pq.pop();
    cout<<pq.top()<<"\n";
    pq.push(90);
    cout<<pq.top();
    cout<<pq.size();*/
   /* while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }*/

    /// problem Left Rotation
   /* int n,d,x;
    cin>>n>>d;
    queue<int>q;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        q.push(x);
    }
    for(int i=0 ; i<d ; i++)
    {
        q.push(q.front());
        q.pop();
    }


    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }*/
    /// O(n)

    /// problem Easy Stack

   /* int t,n,x;
    scanf("%d",&t);
    stack<int>st;
    while(t--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d",&n);
            st.push(n);
        }
        else if(x==2 && !st.empty())
        {
            st.pop();
        }
        else if(x==3)
        {
            if(st.empty())
                printf("Empty!\n");
            else
                printf("%d\n",st.top());
        }


    }*/
    /// O(n)

    int n,x,c=0;
    long long sum=0;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
         if (x<0)
            pq.push(x);

         sum+=x;
         c++;
         if(sum<0)
         {
             c--;
             sum-=pq.top();
             pq.pop();
         }

    }

    cout<<c;

    /// O(nlogn)













    return 0;
}

