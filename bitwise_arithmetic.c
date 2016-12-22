// Developer- Debarghya Das (http://debarghyadas.com)
// Intro- Performs addition and multiplication using only bit operation.
// Source- https://www.quora.com/What-is-the-most-elegant-line-of-code-youve-seen/answer/Debarghya-Das?srid=u2HNX

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
