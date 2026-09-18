#include <stdio.h>

int main(){

    printf("Aku adalah manusia");

    struct User{
        int saldo;
        int withdraw;
    };

    
    struct User user = {
        .saldo = 1000000,
        .withdrawal = 0
    };

    return 0;
}