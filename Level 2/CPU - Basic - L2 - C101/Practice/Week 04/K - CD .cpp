
#include <iostream>
using namespace std;
#include<stack>
#include<map>
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    do{
        map<long long ,long long>mp;
        int n,m;
        cin>>n>>m;
        if(n==0&m==0)break;
        int c=0;
        for(int i=0;i<n+m;i++){
            int x;
            cin>>x;
            mp[x]++;
            if(mp[x]>1){
                c++;
            }
        }
        cout<<c<<endl;
    }while(true);
    return 0;
}
