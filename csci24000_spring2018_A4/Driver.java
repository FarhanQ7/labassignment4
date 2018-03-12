import java.io.*;
import java.lang.String;

/*“Honor Pledge: I pledge that I have neither given
    ffquresh
     */

public class Driver<E> {

    Student student = new Student();
    Student[] student_array = new Student[20];
    E[] str =  (E[]) new  Object[100];
    String[] st =  new String[11];
    Stack stack =  new Stack();

    // house keeping function used to find the length of the str
   public int str_length(){

       int counter = 0;
       while(str[counter] != null){
           counter++;
       }

       return counter;



   }


    // house keeping function used to find the length of the student_array
    public int stu_length(){

        int counter = 0;
        while(student_array[counter] != null){
            counter++;
        }

        return counter;



    }

//-----------------------------------------------------------------
    // pop house keeping function that helps read in data from text file
    public void pop(E[] a){

        int counter = 0;
        while(str[counter] != null){

            counter++;

        }
        for(int i = 0; i< a.length; i++ ) {
            str[counter++] = a[i];
        }



    }

//-------------------------------------------------------------------------------

// Driver gets input from the text file

    public Driver()throws Exception

    {

        File file = new File("students.txt");

        BufferedReader br = new BufferedReader(new FileReader(file));

        String[] a = new String[10];
        int counter = 0;
        while ((st[counter] = br.readLine()) != null)


           pop( (E[]) st[counter].split(","));

    }

//-------------------------------------------------------------------------------------
// Student Maker dynamically creates the student objects with out any values and stores them into an array

    public void Student_Maker(){



        for(int i =0; i < 10; i++){

            Student stu = new Student();

            student_array[i] = stu;

            }



    }
    //-------------------------------------------------------------------------------------
    // setter is a house keeping function that assigns the student object properties with values


    public void setter(int j) {

        int i = 0;
        int k = 0;
        switch (j) {
            case 0:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Name = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 1:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Name_2 = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 2:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Address = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 3:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Address_2 = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 4:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Address_3 = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 5:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Address_4 = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 6:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].Address_5 = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 7:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].ID = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;

            case 8:
                 i = 0;
                 k = j;
                while (k < str_length()) {
                    student_array[i].GPA = (String) str[k];
                    i++;
                    k = k + 9;

                }
                break;


        }
    }

// Assigns values to student objects

    public void Assigner(){

      for(int i = 0; i <stu_length(); i++){


          setter(i);



      }

    }
    //Loads values from txt file
    public void Load(){


       for(int i =0; i < stu_length(); i++){


           stack.push(student_array[i]);



       }




    }
    //prints values on the stack
    public void Print(){

        Student[] student = new Student[stu_length()];


       for(int i=0 ; i < stu_length(); i++){




           student[i] =  (Student) stack.pop(i);



       }

       if(student[0] == null){
           System.out.print("Stack is empty!\n");
       }else{
            for(int o = 0; o<student.length; o++) {
                System.out.print("ID: ");
                System.out.print(student[o].ID);
                for(int a=0; a<student[o].ID.length(); a++) {
                    System.out.print(" ");
                }
                System.out.print("Name: ");
                System.out.print(student[o].Name +" "+ student[o].Name_2);
                for(int a=0; a < (java.lang.Math.abs((student[o].Name.length()+student[o].Name_2.length() - 16) )); a++) {
                    System.out.print(" ");
                }
                System.out.print("Address: ");
                System.out.print(student[o].Address+" "+student[o].Address_2+" "+student[o].Address_3+" "+student[o].Address_4+" "+student[o].Address_5);
                for(int a=0; a < (java.lang.Math.abs((student[o].Address.length()+student[o].Address_2.length()+student[o].Address_3.length()+student[o].Address_4.length()+student[o].Address_5.length() - 50) )); a++) {
                    System.out.print(" ");
                }
                System.out.print("GPA: ");
                System.out.print(student[o].GPA);
                System.out.print("\n");


            }



       }



    }






}
