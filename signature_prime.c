// Developer- Minhas Kamal (https://minhaskamal.github.io)
// Intro- Keeps printing prime number (theoretically) forever. Number of characters- 60.
//      Can be made shorter (53 bytes)- main(m,k){for(;m%k--?:(k=m++);k^1?:printf("%i|",m));}
// Details- https://www.quora.com/What-is-the-shortest-and-most-effective-code-ever-written/answer/Minhas-Kamal?srid=u2HNX

_=1;main($){for(;_%$?:(_+=$=1);++$*$>_&&printf("%i|",$=_));}
