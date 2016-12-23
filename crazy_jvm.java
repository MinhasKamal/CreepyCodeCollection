// Intro- Seems like the JVM has gone mad, printing random integers.
// Details- https://blog.jooq.org/2013/10/17/add-some-entropy-to-your-jvm/ (modified)

import java.lang.reflect.Field;
import java.util.Random;
 
public class crazy_jvm {
    public static void main(String[] args) throws Exception {
        justKidding();

        for(int i=0; i<10; i++){
            System.out.println((Integer) i);
        }
    }

    private static void justKidding() throws Exception{
        // extract the IntegerCache through reflection
        Field field = Class.forName("java.lang.Integer$IntegerCache").getDeclaredField("cache");
        field.setAccessible(true);
        Integer[] cache = (Integer[]) field.get("java.lang.Integer$IntegerCache");

        // rewrite the Integer cache
        for (int i=0; i<cache.length; i++){ 
            cache[i] = new Integer(new Random().nextInt());
        }
    }
}
