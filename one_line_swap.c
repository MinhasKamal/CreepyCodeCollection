// Intro- Strange one-liners that swaps value of two variables.
 
#include <stdio.h>

main(){
    int a=5, b=7;

    a-=b=(a+=b)-b; // Developer- Minhas Kamal (https://minhaskamal.github.io)
                   // Details- https://cloud.githubusercontent.com/assets/5456665/21447433/bc21ad60-c8fe-11e6-9154-b3b682cad607.png
    printf("%d %d\n", a, b);
 
    a=(int[]){b, b=a}[0]; // Expanded- int[] arr = {b, b=a}; a = arr[0];
    printf("%d %d\n", a, b);
    
    a^=b^=a^=b; // Developer- Chris Taylor (http://chris-taylor.github.io/)
                // Details- http://chris-taylor.github.io/blog/2013/02/25/xor-trick/
    printf("%d %d\n", a, b);
    
    a=b+a-(b=a); //Details- http://stackoverflow.com/questions/20800684/why-is-a-ab-b-a-a-bad-choice-for-swapping-two-integers
    printf("%d %d\n", a, b);
 
    // Bonus- Get the max number without using logical operation
    int m = (a+b+sqrt((a-b)*(a-b)))/2; // Developer- Minhas Kamal (https://minhaskamal.github.io)
                                       // Details- max = (max+max)/2 = (max+(min+differenceOfMinMax))/2
                                       //              = ( max+(min+absolute(max-min)) )/2;
                                       //              = ( max+min+squareroot((max-min)*(max-min)) )/2;
    printf("%d \n", m);
}
