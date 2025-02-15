import java.util.ArrayList;

public class PrimeDirective {

    public boolean isPrime(int number) {
        
        int num = number;
        
        if(num == 2) {
            return true;
        } else if(num < 2) {
            return false;
        }

        for(int i = 2; i < num-1; i++) {
            if(num % i == 0) {
                return false;
            } 
        }
        return true;
    }

    public ArrayList<Integer> onlyPrime(int[] numbers) {
        ArrayList<Integer> primes = new ArrayList<Integer>(); 

        for(int number:numbers) {
            isPrime(number);
            if(isPrime(number) == true) {
                primes.add(number);
            }
        }

        return primes;
    }
    public static void main(String[] args) {
        
        PrimeDirective pd = new PrimeDirective();
        int[] numbers = {6, 29, 28, 33, 11, 100, 101, 43, 89};
        System.out.println(pd.onlyPrime(numbers));
    }
}