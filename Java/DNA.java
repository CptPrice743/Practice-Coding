public class DNA {
    public static void main(String[] args) {
        //  -. .-.   .-. .-.   .
        //    \   \ /   \   \ / 
        //   / \   \   / \   \  
        //  ~   `-~ `-`   `-~ `-

        String dna1 = "ATGCGATACGCTTGA";
        String dna2 = "ATGCGATACGTGA";
        String dna3 = "ATTAATATGTACTGA";

        System.out.println("Length of DNA 1: " + dna1.length());
        System.out.println("Length of DNA 2: " + dna2.length());
        System.out.println("Length of DNA 3: " + dna3.length());
        System.out.println("");

        int start = dna1.indexOf("ATG");
        int end = dna1.indexOf("TGA");

        if(start != -1 && end != -1 && (end - start) % 3 == 0) {
            System.out.println("Every condition satisfied.");

            String protien = dna1.substring(start, end + 3);
            System.out.println("Protien: " + protien);
        } else {
            System.out.println("No protien");
        }
    }
  }