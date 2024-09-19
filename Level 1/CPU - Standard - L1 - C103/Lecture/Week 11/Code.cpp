#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n , m;
vector<int> path;
void merge (int l , int r , vector<int>&v){
    vector<int>lft , right;
    int mid = (l+r)/2;
    for (int i=l;i<=mid;i++)
        lft.push_back(v[i]);
    for (int i=mid+1;i<=r;i++)
        right.push_back(v[i]);
    lft.push_back(INT_MAX);
    right.push_back(INT_MAX);
    int lp = 0 , rp = 0;
    for (int i=l;i<=r;i++){
        if (lft[lp]<=right[rp])
            v[i] = lft[lp++];
        else
            v[i] = right[rp++];
    }
}
void mergeSort (int l , int r , vector<int>&v){
   // base case
   if (l>=r)
    return;

    int mid = (l+r)/2;

    mergeSort(l , mid , v) ;
    mergeSort(mid+1 , r , v);
    merge(l , r , v);
}
int main()
{
    fast();
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto & i : v)
        cin >> i;
     mergeSort (0 , n-1 , v);
     for (auto i : v)
        cout << i << ' ';

    return 0;
}
