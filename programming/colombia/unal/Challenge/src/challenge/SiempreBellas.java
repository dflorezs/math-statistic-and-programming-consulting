
package challenge;

import java.util.ArrayList;

/**
 *
 * @author dafcode
 */
public class SiempreBellas {
      public ArrayList <Integer> tipos_ropa(ArrayList <Integer> codes){
        ArrayList <Integer> ans = new ArrayList <>();
        for (int element : codes){
            if (!(ans.contains(element))) ans.add(element);
        }
        return ans;
    }
    
    public ArrayList <Integer> ropa_faltante(ArrayList <Integer> indexMissingCodes, ArrayList <String> products, String typeProduct){
        ArrayList <Integer> ans = new ArrayList <>();
        for (int element : indexMissingCodes){
            if (products.get(element) == typeProduct) ans.add(element);
        }
        return ans;
    }
    
    public ArrayList <Integer> novendo(ArrayList <Integer> interchangeableCompetence, ArrayList <Integer> siempreBellas){
        ArrayList <Integer> ans = new ArrayList <>();
        for (int element : interchangeableCompetence){
            if (!(siempreBellas.contains(element))) ans.add(element);
        }
        return ans;
    }
    
    public Integer cambio_socios(ArrayList <Integer> surtiRopa, ArrayList <Integer> siempreBellas){
        int countSurtiRopa = 0, countSiempreBellas = 0;
        for (int element : surtiRopa){
            if ((!siempreBellas.contains(element)))countSurtiRopa += 1; 
        }
        for (int element : siempreBellas){
            if ((!surtiRopa.contains(element)))countSiempreBellas += 1; 
        }
        if (countSurtiRopa < countSiempreBellas) return countSurtiRopa;
        else return countSiempreBellas;
    }
}
