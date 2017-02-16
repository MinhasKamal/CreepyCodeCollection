// Developer- Manfred Touron (https://github.com/moul) & Uriel Corfa (https://github.com/korfuri)
// Intro- Prints a dynamic christmas tree.
// Details- https://github.com/MinhasKamal/CreepyCodeCollection/pull/10

#define C(B,E,S)(1+(E)*2+(B)*4+(((B)/2)*2)*(((B)+1)/2))

/* */ __
/* by */                     (
/* ko */                    int
/* rf */                   $,int
/* ur */                  o,int O
/* i& */                   , int
/* mo */                  Q ,char
/* ul */                 c){return
/* vi */                $<(C(Q-1,Q+
/* ve */               3,Q)-O-1)/2?(
/* le */                write(1," "
/* mo */               ,1)+__(++$,o,
/* uv */              O,Q,c )): (o<O?
/* em */             write(1,&c,1)+__(
/* en */            $,++o,O,Q,c):write(
/* td */           1,"\n",1));}_(int or,
/* es */             int e,int $,int o
/* as */            ,int Q){return or<Q
/* te */           ?(e<or+4?__(0,0,C(or,
/* ks */          e,Q),Q,42)+_(or,++e,0,0
/* di */         ,Q): _(++or,0,0,0,Q)):e<Q
/* ss */        ?__(0,0,Q|1,Q,'|')+_(or,++e
/* id */       ,0,0,Q):0;}main(int c,char**v
){return                   c>1&&
/* en */                   atoi(
/* ts */                   1[v])
/* <3 */                   >=0?_
/*/*             (2,0,0,8,astk(0[x])):c;}             /**/
/**/             (0,0,0,0,atoi(1[v])):0;}             /**/
