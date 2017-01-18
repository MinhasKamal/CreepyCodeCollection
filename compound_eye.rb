# Intro: Displays animated pattern.
# Source: http://code-poetry.com/compound_eye

                   c,q,g,p=1.45,0.5,
                  0.25,0.25;v=->x,t,s{
                a,j=(x-c).abs,(t-q).abs
               return j>p||a>2*g ? 0: (s*
              -(2*p*g-p*a-g*j)).to_i+s;};(
             1..1000).map{|m|;s="\n   " ; (
              0..21).map{|t|;(0..74). map{
               |x|;d=v[x/25.0,t/21.0, m];
                s+=' .:-=+*&#%@'[d%11]};
                 s+="\n   "};sleep(0.02
                  );puts(s);'.:-=+*&'}
