#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int a=0, b=2;
    cin >> a;
    if ( numero_primo (a, b) ){
        cout << "numero primo";
    }else{
        cout << "numero non primo";
    }
    return 0;
}
