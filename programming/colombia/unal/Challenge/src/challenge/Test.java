
package challenge;

import java.util.ArrayList;
import java.util.Arrays;

/**
 *
 * @author dafcode
 */
public class Test {

    
    public static void main(String[] args) {
        SiempreBellas s = new SiempreBellas();
        
        //test 1
        ArrayList<Integer> arr1 = new ArrayList<>(Arrays.asList(45, 62, 78, 89, 12, 45, 98, 53, 64, 189, 54, 89));
        System.out.println(s.tipos_ropa(arr1));
        
        //test 2
        ArrayList<Integer> arr2 = new ArrayList<>(Arrays.asList(1,2,6,8));
        ArrayList<String> arr2Str = new ArrayList<>(Arrays.asList("deportiva", "lencería", "informal", "sport", "casual", "deportiva", "informal", "alta-costura", "vestidos", "formal", "elegante", "sport"));
        String str = "informal";
        System.out.println(s.ropa_faltante(arr2, arr2Str, str));
        
        //test 3
        ArrayList<Integer> arr3 = new ArrayList<>(Arrays.asList(3,5,7,10,15,16));
        ArrayList<Integer> arr3_1 = new ArrayList<>(Arrays.asList(4,10,5,8)); 
        System.out.println(s.novendo(arr3, arr3_1));
        
        //test 4
        ArrayList<Integer> arr4 = new ArrayList<>(Arrays.asList(3,5,7,10,15,16));
        ArrayList<Integer> arr4_1 = new ArrayList<>(Arrays.asList(4,10,5,8));
        System.out.println(s.cambio_socios(arr4, arr4_1));
        
    }   
    
}
