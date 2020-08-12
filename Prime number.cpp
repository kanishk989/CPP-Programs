// C and C++
#include <iostream>  // input and output c++ cin>> cout<<
#include <cstdio> // input and output c
#include <cmath>

using namespace std;
int main()
{
   int limit;
   printf("\n Enter the limit = ");
   cin >> limit;  // 1000
   int i, j;
   int flag;
   for(i = 1 ; i <= limit ; i++) // 1 ------------ 1000  97
   {
      flag = 0;
      for(j = 2 ; j <= sqrt(i) ; j++)  // 2 ---------
      {
         if(i % j == 0)
         {
            flag = 1;
            break;
         }

      }  // inner for loop close
      if(flag == 0 && i != 1)
      {

         printf("%d ", i);

      }
   }   // outer for loop close

   return 0;
}
