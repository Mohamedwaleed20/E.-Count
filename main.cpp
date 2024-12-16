#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
   string a ;
   cin >> a ;
   int s = 0 ;
   for(char b : a)
   {
       s=s+b-'0';
   }
   cout << s ;

    return 0;
}
