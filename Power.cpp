#include <iostream>
#include <cmath>

using namespace std;

int power5(int baseNum, int powerNum){
    int result = 1;
     for(int i = 0; i < powerNum; i++){
        result = result * baseNum;
    }
    return result;
}

int main()
{
    int bn, pn;
    cout << "Enter Base number: ";
    cin >> bn;
    cout << "Enter Power number: ";
    cin >> pn;
    cout << power5(bn, pn) ;
    
    return 0;
}