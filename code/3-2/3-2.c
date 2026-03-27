#include <stdio.h>

void swap_endian(int *x){
    unsigned char* addr = (unsigned char*)x;
    unsigned char* sto;
    *sto = *addr;
    *addr = *(addr+3);
    *(addr+3) = *sto;
    *sto = *(addr+1);
    *(addr+1) = *(addr+2);
    *(addr+2) = *sto;
}

int main(){
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x",x);

    return 0;
}
