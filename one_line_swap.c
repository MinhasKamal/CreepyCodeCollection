// Strange one-liners that swaps value of two variables.
 
#include <stdio.h>

main(){
    int a=5, b=7;

    a-=b=(a+=b)-b;
    printf("%d %d\n", a, b);
 
    a=(int[]){b, b=a}[0];
    printf("%d %d\n", a, b);
    
    a^=b^=a^=b;
    printf("%d %d\n", a, b);
    
    a=b+a-(b=a);
    printf("%d %d\n", a, b);
}
