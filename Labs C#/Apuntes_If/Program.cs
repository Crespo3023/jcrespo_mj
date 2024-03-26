using System;

class Program {
    static void Main() {
        try {
            
            int divisor= 0;
            int result= 10/divisor;

        } catch(DivideBy ZeroExcepcion e){
           Console.WriteLine(Excepcion capturada: " + e.getMessage());
      }
    }
}

