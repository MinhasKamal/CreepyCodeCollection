// Source- http://stackoverflow.com/questions/7924961/weird-java-behavior-with-casts-to-primitive-types
// It is surprising enough, that the code compiles & prints 1.

class confusion{
    
	public static void main (String[] args){
    	int i = (byte) + (char) - (int) + (long) - 1;
	    System.out.println(i);
	}
}
