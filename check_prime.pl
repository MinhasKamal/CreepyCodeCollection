# Developer- Abigail (http://abigail.be/)
# Intro- Checks if a number is prime using regular expression!
# Details- http://neilk.net/blog/2000/06/01/abigails-regex-to-test-for-prime-numbers/
 
$a=33;
print "prime" if(1x$a)!~/^1?$|^(11+?)\1+$/;

# Following Java code does the same thing-
#     public boolean prime(int n){return !new String(new char[n]).matches(".?|(..+?)\\1+");}
# Details- http://stackoverflow.com/questions/2795065/how-to-determine-if-a-number-is-a-prime-with-regex
