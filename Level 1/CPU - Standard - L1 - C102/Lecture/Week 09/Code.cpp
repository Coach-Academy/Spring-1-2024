 /// Problem Registration system 
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   map<string,int>mp;
   while (n--){
    string s;
    cin >> s;
    if (mp.find(s)==mp.end())
       cout << "OK\n";
    else cout << s << mp[s] << "\n";
    mp[s]++;
 
   }
 
    return 0;
}*/

/// Problem Cancel trains

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--){
     int n , m;
     cin >> n >> m;
     set<int>st;
     for (int i=0;i<n;i++){
        int x;
        cin >> x;
        st.insert(x);
     }
 
     for (int i=0;i<m;i++){
        int x;
        cin >> x;
        st.insert(x);
     }
 
     int total = n+m;
     cout << total - st.size() << "\n";
   }
 
    return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--){
     int n , m;
     cin >> n >> m;
     map<int,int>mp;
     for (int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
     }

     for (int i=0;i<m;i++){
        int x;
        cin >> x;
        mp[x]++;
     }

     int ans = 0;
     for (int i=1;i<=100;i++){
        if (mp[i]>1)
            ans++;
     }
     cout << ans << "\n";
   }

    return 0; 
} */

