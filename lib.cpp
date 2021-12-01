#include "lib.h"
int numero_primo (int a, int b){
    if( a==1 ){
        return 0;
    }
    if( a%b == 0 && a==b){
        return 1;
    }else if ( ( a%b==0 ) && ( a!=b ) ){
        return 0;
    }else{
        return numero_primo (a, (b+1));
    }
}
