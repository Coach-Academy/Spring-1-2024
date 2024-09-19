#include <bits/stdc++.h>

using namespace std;
/*
int x=2;


int fun2()
{
    cout<<y;
    fun3();
}
int fun1()
{
    int y=22;
    cout<<y;

    fun1();
    return x;
}
*/
int main()
{
 /* int y=1;
  int x=10;
  cout<<x;
  fun1()

  it<mp.end();*/

   int *Ppointer=new int;
   *Ppointer=5;


   cout<<(*Ppointer)<<"\n";
   delete Ppointer;
   cout<<(Ppointer);
   *Ppointer=5;

return 0;
    }


