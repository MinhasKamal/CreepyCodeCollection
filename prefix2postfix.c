// Developer- Nadeem Moidu (https://www.quora.com/profile/Nadeem-Moidu)
// Intro- Converts prefix notation to postfix. Operands has to be of one digit.
//        The notation should not carry space. Example input- /*A+BCD or *-1/341
 
#include <stdio.h>

main(){
    char c=getchar();
    (c=='+' || c=='-' || c=='*' || c=='/')? main(),main(): 0;
    putchar(c);
}
