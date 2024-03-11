#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int p[n] , a[n] , b[n];
    for (int i=0;i<n;i++)
        p[i] = i + 1;
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=0;i<n;i++)
        cin >> b[i];
    int idx_a , idx_b;
    int cnt = 1;
    do {
      bool found = false ;
      for (int i=0;i<n;i++)
      {
          if (a[i]!=p[i])
            found = true;
      }
      if (!found)
        idx_a = cnt ;
      found = false ;
      for (int i=0;i<n;i++)
      {
          if (b[i]!=p[i])
            found = true;
      }
      if (!found)
        idx_b = cnt ;
    cnt++;

    }while (next_permutation(p , p+n));
    cout << abs (idx_a - idx_b);

}
