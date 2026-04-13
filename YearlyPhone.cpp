#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int x;
      cin>>x;
     int lastDigit = x%10;
     int firstThree = x/10;
     int secondLast = firstThree % 10 ;

     cout<< "K"<<secondLast<<lastDigit<<endl;

     
    return 0;
}