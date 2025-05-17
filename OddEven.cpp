#include <iostream>
using namespace std; 


bool isEven(int n){
    if(n%2 == 0) {
        return true;
    } else{
        return false;
    }
}
int main(){
    int a = isEven(21);
    if(a == 1){
        cout << "No is EVEN" <<endl ;
    } else{
        cout << "No is ODD" <<endl ;
    }
    return 0;
}