// Source- http://vanillajava.blogspot.com/2011/10/randomly-no-so-random.html
// Will (randomly!) print- 1 1 1 1 1 1 1 1 1 1.
 
import java.util.Random;

public class not_so_random{
    
	public static void main (String[] args){
		Random random = new Random(441287210);
	    for(int i=0;i<10;i++){
	        System.out.print(random.nextInt(10)+" ");
        }
	}
}
