#include <stdio.h> 
#include <stdlib.h>

int main(){
    unsigned char digits[4]; 
    digits[0]=0x12; 
    digits[1]=0x34;
    digits[2]=0x56;
    digits[3]=0x78;
    int *ptr = (int *)digits;
    
    return 0;
}