#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{

    if(x<1)
        return 1;

   return x*fact(x-1);
}

void prnt(int x)
{

    if(x<1)
        return ;

   prnt(x-1);
   cout<<x<<"\n";

}

void prnt2(int x)
{

    if(x<1)
        return ;

   cout<<x<<"\n";
   prnt2(x-1);
    cout<<x<<"\n";

}

//0 1 1 2 3 5 8 13 21 34 .....

int fib(int x)
               /* 3
              2  1
             1 1 1 0
            1 0 x x x
            x x */
{
    if(x<=1)
        return x;

    return fib(x-1)+fib(x-2);


}
///o(2^n)


///O(n) o(2n)

/// base condition  /// movement [direction; sure]
/*
5*5*5*5*5*5*5 .......
fcatorial(5)= 5*4*3*2*1;*/


int main()
{
   /* int f=1;
    for(int i=1 ; i<=5 ; i++)
        f*=i;


    cout<<f<<"\n";
    cout<<fact(5); 120
   /* 8 9 3 2 3 2 4 5/// mergesort()
    8 9 3 2          3 2 4 5
    8 9      3 2          3 2     4 5
    8     9      3    2          3    2     4    5
    8 9          2 3             2 3        4 5
    2 3 8 9              2 3 4 5
    2 2 3 3 4 5 8 9*/

    //prnt(5);
    //prnt2(5);
  cout<<fib(6);

return 0;
    }


