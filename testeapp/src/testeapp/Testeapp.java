package testeapp;

public class Testeapp {

    public static void main(String[] args) {
        int x = 2;
        int y = 3;
        int somaDosNumeros = 0;
        somaDosNumeros = soma(x,y);
        System.out.println("Valor da soma e: " + somaDosNumeros );
    }
    
   public static int soma (int x, int y){
      
       return x+y; 
   }
    
}
