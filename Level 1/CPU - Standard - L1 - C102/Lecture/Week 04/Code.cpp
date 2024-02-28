#include <bits/stdc++.h>


using namespace std;

int main()
{

   /*int a[100];
   int n;
   cin>>n;
   double avg=0;
   double sum=0;
   for(int i=0 ; i<n ; i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   avg=sum/n;
   cout<<avg;*/





   /*for(int i=n-1 ; i>=0 ; i--)
    cout<<a[i]<<" ";*/


  /* for(int i=0 ; i<n ; i++)
     cout<<a[i]<<" ";*/
/*
     int a[3][3];

     1 2 3
     4 5 6
     7 8 9


     for(int i=0 ; i<3; i++)
     {
         for(int j=0 ; j<3; j++)
            cin>>a[i][j];
     }



     for(int i=0 ; i<=2 ; i++)
     {
         cout<<a[i][i];
     }*/







    /* for(int i=0 ; i<3 ; i++)
     {
         for(int j=0 ; j<3; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
     }*/

     /// problem A

     /*int n;
     cin>>n;
     int a[n];
     for(int i = 0;i<n ;i++)
     {
         cin>>a[i];
     }
     int l,r;
     cin>>l>>r;


     for(int i=l-1 ; i<=r-1 ; i++)
        cout<<a[i]<<" ";*/

       /* cout<<"hello world 122";
        cout<<'a';
        cout<<1;*/

       /* char str[10]="hello";

       // cout<<strlen(str);

        int a[100],b[20],c[]={1,2};

        char a1[]="AA",b1[]="BB";
        strcat(a1,b1);
        cout<<b1;*/


       /* string s(100,'z');
        string s2="DDDDDD";


        string s3=s+" Hello "+s2;
        cout<<s3;*/

       /* cin>>s;

        cout<<s[2];*/

       // string s="hello world";
       // sort(s.begin(),s.end());

       // reverse(s.begin(),s.end());

        /*cout<<s;
        string s2=s.substr(2,3);
       // cout<<s2;




       /* for(int i=0 ; i<s.size() ; i+=2)
            cout<<s[i];*/

  
/// problem string
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       if(s.size()>10)
       {
           cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
       }
       else
       {
           cout<<s<<"\n";
       }
   }








    return 0;
}
