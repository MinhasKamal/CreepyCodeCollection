#define g(k) ((a[(k)>>1]&d[k&1])>>((((k)&1)^1)<<4))//balabalabalab 
d[2]={-65536,65535},a[8]={0,0,0,0,0,0,0,0},x,c,i,j,k,f,e,p,q;main(
){x=time(0)&15;char*s="#define g(k) ((a[(k)>>1]&d[k&1])>>((((k)&1"
")^1)<<4))%cd[2]={-65536,65535},a[8]={%d,%d,%d,%d,%d,%d,%d,%d},x,"
"c,i,j,k,f,e,p,q;main(){x=%d;char*s=%c%s%c;scanf(%c%%c%c,&c);c&=9"
"5;if(c==87){for(i=1;i<4;i++){for(j=0;j<4;j++){p=(i<<2)+j;if(!g(p"
"))continue;e=0;q=i;for(k=i-1;k>=0;k--){if(!g((k<<2)+j)){q=(k<<2)"
"+j;continue;}if(g(p)==g((k<<2)+j)){a[((k<<2)+j)>>1]&=~d[j&1];a[("
"(k<<2)+j)>>1]|=(g(p)+1)*(d[j&1]&65537);a[p>>1]&=~d[p&1];e=1;}els"
"e break;}if(!e){a[q>>1]&=~d[q&1];a[q>>1]|=g(p)*(d[q&1]&65537);a["
"p>>1]&=~d[p&1];}}}}if(c==83){for(i=2;i>=0;i--){for(j=0;j<4;j++){"
"p=(i<<2)+j;if(!g(p))continue;e=0;q=i;for(k=i+1;k<4;k++){if(!g((k"
"<<2)+j)){q=(k<<2)+j;continue;}if(g(p)==g((k<<2)+j)){a[((k<<2)+j)"
">>1]&=~d[j&1];a[((k<<2)+j)>>1]|=(g(p)+1)*(d[j&1]&65537);a[p>>1]&"
"=~d[p&1];e=1;}else break;}if(!e){a[q>>1]&=~d[q&1];a[q>>1]|=g(p)*"
"(d[q&1]&65537);a[p>>1]&=~d[p&1];}}}}if(c==68){for(i=0;i<4;i++){f"
"or(j=2;j>=0;j--){p=(i<<2)+j;if(!g(p))continue;e=0;q=(i<<2)+j;for"
"(k=j+1;k<4;k++){if(!g((i<<2)+k)){q=(i<<2)+k;continue;}if(g(p)==g"
"((i<<2)+k)){a[((i<<2)+k)>>1]&=~d[k&1];a[((i<<2)+k)>>1]|=(g(p)+1)"
"*(d[k&1]&65537);a[p>>1]&=~d[p&1];e=1;}else break;}if(!e){a[q>>1]"
"&=~d[q&1];a[q>>1]|=g(p)*(d[q&1]&65537);a[p>>1]&=~d[p&1];}}}}if(c"
"==65){for(i=0;i<4;i++){for(j=1;j<4;j++){p=(i<<2)+j;if(!g(p))cont"
"inue;e=0;q=(i<<2)+j;for(k=j-1;k>=0;k--){if(!g((i<<2)+k)){q=(i<<2"
")+k;continue;}if(g(p)==g((i<<2)+k)){a[((i<<2)+k)>>1]&=~d[k&1];a["
"((i<<2)+k)>>1]|=(g(p)+1)*(d[k&1]&65537);a[p>>1]&=~d[p&1];e=1;}el"
"se break;}if(!e){a[q>>1]&=~d[q&1];a[q>>1]|=g(p)*(d[q&1]&65537);a"
"[p>>1]&=~d[p&1];}}}}for(i=0;i<4;i++)for(j=0;j<4;j++)if(~g((i<<2)"
"+j))f=1;while(f&&g(x))x=((x>>16)|(x<<16)^time(0))&15;if(f)a[x>>1"
"]|=d[x&1]&65537;printf(s,10,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a"
"[7],x,34,s,34,34,34,34,34,34,34,10);for(i=0;i<4;i++){printf(%c//"
"%c);for(j=0;j<4;j++){printf(%c%%15d %c,(1<<g((i<<2)+j))&~1);}put"
"char(10);}}%c";for(i=0;i<4;i++)for(j=0;j<4;j++)if(~g((i<<2)+j))f=
1;while(f&&g(x))x=((x>>16)|(x<<16)^time(0))&15;if(f)a[x>>1]|=d[x&1
]&65537;printf(s,10,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],x,34,s
,34,34,34,34,34,34,34,10);for(i=0;i<4;i++){printf("//");for(j=0;j<
4;j++){printf("%15d ",(1<<g((i<<2)+j))&~1);}putchar(10);}}//balaba
