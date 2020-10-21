import java.util.Scanner;
class rand{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number:");
            int z = sc.nextInt();
            
            for(int i = 1 ;i<z;i++){
            if(i % 3 == 0){
                System.out.println("Fizz");
            }
             else if(i % 5 == 0){
                System.out.println("Buzz");
            }
             else if(i %3 ==0 && i%3 ==0){
                 System.out.println("FizzBuzz");
             }
             else{
                 System.out.println(i);
             }
        }
    }
}