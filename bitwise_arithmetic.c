// Source- https://www.quora.com/profile/Debarghya-Das
// Performs addition and multiplication using only bit operation.

#include <stdio.h>

main(){
    printf("%d %d", add(4, 5), multiply(4, 5));
}

int multiply(int a, int b){
    return b==0?0:add(((b&1) ==1?a:0),multiply(a<<1,b>>1));
}

int add(int a, int b){
    return b==0?a:add(a^b, (a&b)<<1);
}
