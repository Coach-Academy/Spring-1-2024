#include<iostream>
using namespace std;
int main()
{
    int i,n,b=0,a=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[b])
            b=i;
        else if(arr[i]<=arr[a])
            a=i;
    }
    cout<<(b-1)+(n-a)-(b>a)<<endl;
    return 0;
}
