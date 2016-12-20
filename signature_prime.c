// Developer- Minhas Kamal
// Keeps printing prime number (theoretically) forever. Number of characters- 83.

main($,_){for($=3;;$+=2)for(_=3;1<_&(_<=sqrt($)?_:printf("%i|",$)<0);_=$%_?_+2:1);}
