// Intro- Will (randomly!) print- 1 1 1 1 1 1 1 1 1 1.
// Details- http://stackoverflow.com/questions/13241937/random-class-acting-odd

import java.util.Random;

public class not_so_random{
    
    public static void main (String[] args){
        Random random = new Random(441287210);
        for(int i=0;i<10;i++){
            System.out.print(random.nextInt(10)+" ");
        }
    }
    
}
