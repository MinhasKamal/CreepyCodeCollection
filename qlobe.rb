# Developer- Yusuke Endoh (https://github.com/mame/)
# Intro- Prints the globe. And it can also be turned by puting command-line argument.
# Details- http://stackoverflow.com/questions/4504196/how-does-this-superb-quine-work
# Source- http://mamememo.blogspot.com/2010/09/qlobe.html

v=0000;eval$s=%q~d=%!^Lcf<LK8,                  _@7gj*LJ=c5nM)Tp1g0%Xv.,S[<>YoP
4ZojjV)O>qIH1/n[|2yE[>:ieC       "%.#%  :::##"       97N-A&Kj_K_><wS5rtWk@*a+Y5
yH?b[F^e7C/56j|pmRe+:)B     "##%      ::##########"     O98(Zh)'Iof*nm.,$C5Nyt=
PPu01Avw^<IiQ=5$'D-y?    "##:         ###############"    g6`YT+qLw9k^ch|K'),tc
6ygIL8xI#LNz3v}T=4W    "#            #.   .####:#######"    lL27FZ0ij)7TQCI)P7u
}RT5-iJbbG5P-DHB<.   "              ##### # :############"   R,YvZ_rnv6ky-G+4U'
$*are@b4U351Q-ug5   "              #######################"   00x8RR%`Om7VDp4M5
PFixrPvl&<p[]1IJ   "              ############:####  %#####"   EGgDt8Lm#;bc4zS^
y]0`_PstfUxOC(q   "              .#############:##%   .##  ."   /,}.YOIFj(k&q_V
zcaAi?]^lCVYp!;  " %%            .################.     #.   "  ;s="v=%04o;ev"%
(;v=(v-($*+[45,  ":####:          :##############%       :   "  ])[n=0].to_i;)%
360)+"al$s=%q#{  "%######.              #########            "  ;;"%c"%126+$s<<
126}";d.gsub!(/  "##########.           #######%             "  |\s|".*"/,"");;
require"zlib"||  "###########           :######.             "  ;d=d.unpack"C*"
d.map{|c|n=(n||  ":#########:           .######: .           "  )*90+(c-2)%91};
e=["%x"%n].pack   " :#######%           :###### #:          "   &&"H*";e=Zlib::
Inflate.inflate(   "  ######%           .####% ::          "   &&e).unpack("b*"
)[0];22.times{|y|   "  ####%             %###             "   ;w=(Math.sqrt(1-(
(y*2.0-21)/22)**(;   " .###:             .#%             "   ;2))*23).floor;(w*
2-1).times{|x|u=(e+    " %##                           "    )[y*z=360,z]*2;u=u[
90*x/w+v+90,90/w];s[(    " #.                        "    ;y*80)+120-w+x]=(""<<
32<<".:%#")[4*u.count((     " .                   "     ;"0"))/u.size]}};;puts\
s+";_ The Qlobe#{" "*18+ (       "#  :#######"       ;"Copyright(C).Yusuke End\
oh, 2010")}";exit~;_ The Qlobe                  Copyright(C).Yusuke Endoh, 2010
