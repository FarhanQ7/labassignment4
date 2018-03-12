import java.io.*;
import java.lang.String;
import java.util.Scanner;

/*“Honor Pledge: I pledge that I have neither given
    ffquresh
     */

public class Main {


    public static void main(String[] args)throws Exception {
        try {

            Stack stack = new Stack();
            Driver drive = new Driver();
            Scanner sc = new Scanner(System.in);


            while (true) {



                    System.out.print("1. Load Students (From File)\n" +
                            "2. Print Stack\n" +
                            "3. Exit Program\n");
                    System.out.print("Enter Your selection: ");
                    int user_input = sc.nextInt();

                    if (user_input == 1) {
                        drive.Student_Maker();
                        drive.Assigner();
                        drive.Load();
                    } else if (user_input == 2) {

                        drive.Print();
                    } else if (user_input == 3) {
                        System.out.print("Have a nice day!");
                        break;
                    } else {
                        System.out.print("Something went wrong!");
                        break;
                    }
                }
            }catch(NullPointerException e){

                System.out.print("Sorry");
            }



    }



}
