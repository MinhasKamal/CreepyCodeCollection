# Intro- Rotates, zooms in & out, and scrolls randomly to examine regions of the Mandelbrot.
# Source- http://www.perlmonks.org/?node_id=329492


 $r=25; $c=80;
                                              $xr=6;$yr=3;$xc=-0.5;$dw=$z=-4/
                                              100;local$";while($q=$dr=rand()
                                             /7){$w+=$dw;$_=join$/,map{$Y=$_*
                                             $yr/$r;
  join""                                    ,map{$                  x=$_*$
 xr/$c;($                                   x,$y)=                 ($xc+$x
  *cos($                                   w)-$Y*               sin$w,$yc+
                                           $x*sin              ($w)+$Y*cos
  $w);$                                   e=-1;$                    a=$b=0
;($a,$b)   =($u-$v+$x,2*$a*               $b+$y)                    while(
$ u=$a*$   a)+($v=$b*$b)<4.5  &&++$e     <15;if                     (($e>$
  q&&$e<   15)||($e==$q and   rand()     <$dr))  {$q=$e;($d0,$d1)   =($x,$
  y); }                        chr(+(   32,96,+  46,45,43,58,73,37  ,36,64
 ,32)[$                        e/1.5]   );}(-$   c/2)..($c/2)-1;}   (-$r/2
 )..($     r/2)-1;select$",     $",$", 0.015;                       system
$^O=~m     ~[wW]in~x?"cls":     "clear";print                       ;$xc=(
$d0+15     *$xc)/16;$yc=($       d1+15*$yc)/                        16;$_*=
1+$z for                         $xr,$yr;$dw                     *=-1 if rand
()<0.02;                          (++$i%110                      )||($z*=-1)}
