
class Main {
    public static void main(String[] args) {

        System.out.println("Hello world!\n");

        // Variabel
        int angka = 5;

        // Tipe Data
        double pecahan = 3.14;

        // For loop
        for (int i = 0; i < 5; i++) {
            System.out.println("Iterasi for ke-" + i);
        }
        System.out.println("\n");

        // If statement
        if (angka > 0) {
            System.out.println("Angka positif\n");
        } else if (angka < 0) {
            System.out.println("Angka negatif");
        } else {
            System.out.println("Angka nol");
        }

        // While loop
        int j = 0;
        while (j < 3) {
            System.out.println("Iterasi while ke-" + j);
            j++;
        }
        System.out.println("\n");

        // Do-while loop
        int k = 0;
        do {
            System.out.println("Iterasi do-while ke-" + k);
            k++;
        } while (k < 3);
        System.out.println("\n");

        // Array satu dimensi
        System.out.print("Isi Arry Satu Dimensi\n");
        int[] arrSatuDimensi = {1, 2, 3, 4, 5};
        for(int i = 0; i < arrSatuDimensi.length; i++) {
            System.out.print(arrSatuDimensi[i]+" ");
        }System.out.println("\n");

        // Array multidimensi
        System.out.print("Isi Arry Dua Dimensi\n");
        int[][] arrMultiDimensi = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        for(int x = 0; x < 3 ; x++){
            for(int y = 0; y < 3 ; y++) {
                System.out.print(arrMultiDimensi[x][y] + " ");
            }
            System.out.println();
        }
        System.out.println("\n");

        // Input
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        int input = scanner.nextInt();

        // Output
        System.out.println("Angka yang dimasukkan: " + input);

        // Comment
        // Ini adalah komentar dalam Java
    }

}