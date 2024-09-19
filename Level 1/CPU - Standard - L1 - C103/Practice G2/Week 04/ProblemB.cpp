#include <iostream>
using namespace std ;
int main () {
  int n;
  cin >> n;
  int arr[n+1];
  for (int i=0;i<n-1;i++)
      cin >> arr[i];
  int a , b;
  cin >>  a >> b;
  a-- , b--;
  int sum = 0;
  for (int i = a ; i < b ;i++){
      sum+=arr[i];
  }
  cout << sum ;
}