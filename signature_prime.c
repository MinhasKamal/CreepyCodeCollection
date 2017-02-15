// Developer- Minhas Kamal (https://minhaskamal.github.io)
// Intro- Keeps printing prime number (theoretically) forever. Number of characters- 65.
//      Can be made shorter (56 bytes)- m;main(k){for(;m%k?:(m+=k=1);++k<m?:printf("%d|",k=m));}
// Details- https://www.quora.com/What-is-the-shortest-and-most-effective-code-ever-written/answer/Minhas-Kamal?srid=u2HNX

_=1;main($){for(;_%$?:(_+=$=1);++$<=sqrt(_)?:printf("%i|",$=_));}
