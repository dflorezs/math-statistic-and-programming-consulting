
package challenge;

import java.util.Scanner;

/**
 *
 * @author dafcode
 */
public class Reto1 {
    private final Scanner scanner = new Scanner(System.in);
    private double mass;
    private double height;
    private int age;
    private double imc;
    
    public String read(){
        return this.scanner.nextLine();    
    }
    
    public void run(){
        String[] data;
        data = read().split(" ");
        
        mass = Double.parseDouble(data[0]);
        height = Double.parseDouble(data[1]);
        age = Integer.parseInt(data[2]);
        imc = (double)Math.round((mass/Math.pow(height, 2))*10.0)/10.0;
 
        if ((mass > 0 && mass < 130) && (height > 0.5 && height< 2.5) && (age > 1 && age < 120)){
            if (imc < 22 && age < 45) System.out.println(imc + " Bajo");
            else if ((imc < 22 && age >= 45) || (imc >= 22 && age < 45)) System.out.println(imc + " Moderado");
            else if (imc >= 22 && age >= 45) System.out.println(imc + " Alto");
        }
        else System.out.println("DATOS INVALIDOS");  
    }
}
