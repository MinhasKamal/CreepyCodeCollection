// Developer- Tomohiko Sakamoto 
// Intro- Computes day of the week for given date.
// Details- https://www.quora.com/How-does-Tomohiko-Sakamotos-Algorithm-work/answer/Raziman-T-V?srid=u2HNX

#include <stdio.h>

main(){
    printf("%d %d %d", dow(2011, 7, 19), dow(1993, 5, 23), dow(2016, 12, 16)); //output- 2 0 5
}

int dow(int y, int m, int d) {
    return ((y-=m<3)+y/4-y/100+y/400+" bed=pen+mad."[m]+d)%7;
}
