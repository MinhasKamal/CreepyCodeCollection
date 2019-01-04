// Developer- Susam Pal (https://stackoverflow.com/users/303363/susam-pal)
// Intro- C code without main.
// Details- http://susam.in/blog/obfuscating-main-function/

#include <stdio.h>
#define _ __(a,n,i,m,a,t,e)
#define __(n,e,u,t,r,a,l) t##r##u##e

_(){
    printf("true!\n");
}
