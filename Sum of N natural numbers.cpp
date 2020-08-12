#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(){
   int n, sum=0;
   cout<<"Enter the value of n(should be a positive integer): "; 
   //Storing the input integer value into the variable n
   cin>>n;

   /* If user enters value of n as negative then display an 
    * error message to user that the value of n is invalid 
    */
   if(n<=0){
      cout<<"Invalid value of n";
   }
   else{
      // We are using while loop to calculate the sum
     int i=1;
     while(i<=n){
	 sum=sum+i;
	 i++;
     }
     cout<<"Sum of first n natural numbers is: "<<sum;
   }

   return 0;
}