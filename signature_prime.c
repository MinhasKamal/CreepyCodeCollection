// Developer- Minhas Kamal
// Keeps printing prime number (theoretically) forever. Number of characters- 82.
// Can be made even shorter (71 bytes)- 
// main($,_){for(;$++;)for(_=2;1<_&(_<$?1:!printf("%i|",$));_=$%_?_+1:1);}
// Complexity rises from n√n to n².

main($,_){for($=3;;$+=2)for(_=3;1<_&(_<=sqrt($)?_:!printf("%i|",$));_=$%_?_+2:1);}
