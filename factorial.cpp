#include <iostream>
using namespace std; 

int fact(int n){
    int fact = 1 ;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    cout << "Factorial on " << n << " = " << fact <<endl;
    return fact;
}

int main(){
    fact(5);
    return 0;
}