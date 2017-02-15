// Developer- Minhas Kamal (https://minhaskamal.github.io)
// Intro- Java code written like python. Finds factorial of big numbers.
// Details- Really! You need detail here too!

public class Factorial                                                                          {
    
    public static int[] calculateFactorial(int inputNumber)                                     {
        int[] factorial = initializeFactorial(inputNumber)                                      ;
        for(int i=inputNumber-1, j, k; i>0; i--)                                                {
            for(j=factorial.length-1, k=0; factorial[j]>=0; j--)                                {
                k+=i*factorial[j]                                                               ;
                factorial[j]=k%10                                                               ;
                k/=10                                                                           ;}
            factorial[j]=k%10                                                                   ;
            k/=10                                                                               ;
            factorial[j-1]=k                                                                    ;
            for(int l=0; factorial[l]<1; l++) 
                factorial[l]=-1                                                                 ;}
        return factorial                                                                        ;}
    
    private static int[] initializeFactorial(int inputNumber)                                   {
        int digits = (int)Math.ceil(inputNumber*Math.log10(inputNumber/2))+2                    ;
        int[] factorial = new int[digits+1]                                                     ;
        for(int i=0; i<factorial.length; i++)
            factorial[i]=-1                                                                     ;
        for(int j=factorial.length-1, i=inputNumber; i>0; j--)                                  {
            factorial[j]=i%10                                                                   ;
            i/=10                                                                               ;}
        return factorial                                                                        ;}
    
    private static void showOutput(int[] factorial)                                             {
        int i=0                                                                                 ;
        for(; factorial[i]<1; i++)                                                              ;
        for(; i<factorial.length; i++) 
            System.out.print(factorial[i])                                                      ;}
    
    public static void main(String[] args)                                                      {
        showOutput(calculateFactorial(67))                                                      ;}}
