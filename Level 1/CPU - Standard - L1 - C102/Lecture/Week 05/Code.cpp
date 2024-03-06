#include <bits/stdc++.h>
#include<cmath>
#include<iostream>
#include <algorithm>

using namespace std;

int x=9;

void fun1(int x)
{
   x++;
   cout<<x<<"\n";

}


double calculateAverage(int math, int science, int history) {

    return (math + science + history) / 3.0;

}





string determineGrade(double averageScore) {

    if (averageScore >= 90) {

        return "A";

    } else if (averageScore >= 80) {

        return "B";

    } else if (averageScore >= 70) {

        return "C";

    } else if (averageScore >= 60) {

        return "D";

    } else {

        return "F";

    }

}

int main()
{


   /* int x=5;


    cout<<x<<"\n";
    fun1(x);

    cout<<x;

    //cout<<result;





   // cout<<"after function";

    //fun1(s);
*/
/*
int numStudents=2;
for (int i = 0; i < numStudents; ++i) {
        string studentName;
        cin >> studentName;
        int mathScore, scienceScore, historyScore;
        cin >> mathScore >> scienceScore >> historyScore;


        double averageScore = calculateAverage(mathScore, scienceScore, historyScore);
        string grade = determineGrade(averageScore);


        cout << "Student: " << studentName << "\n";
        cout << "Average Score: " << averageScore << "\n";
        cout << "Grade: " << grade << "\n";

    }*/
   /* double x=9.46545543678;

    cout<<x;*/

    //cout<<log2(10);

   /* cout<<max({3,10,12 ,24})<<"\n";
    int a=10,b=20;
    int m=min({a,b,4});
    cout<<m<<"\n";*/

   /* string s="fxrya";

    reverse(s.begin(),s.end());
    //cout<<s;
    int a[10];*/
    /// problem Gravity Flip
  /*  int n,a[101];
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0 ; i<n ; i++)
        cout<<a[i]<<" ";*/


    /// problem Currency System in Geraldion
   /* int n;
    cin>>n;
    int a[1001];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    if(count(a,a+n,1)==0)
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }*/

    /// problem Translation

    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(t==s)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";








    return 0;
}
