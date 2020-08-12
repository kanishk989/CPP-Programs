#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, c=0, n, i=3;
    cout<<"no. of terms ";
    cin>>n;
    cout<<"Fibonacci series "<<a<<","<<b<<",";
    while(i<=n){
        i++;
        c=a+b;
        a=b;
        b=c;
        cout<<c<<",";
    }
    return 0;

}