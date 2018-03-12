import java.util.Scanner;

/* I could not find the provided stack so I had to make one from scratch,
    I am not sure if we get the stack class after we submit it a second time

    “Honor Pledge: I pledge that I have neither given
    ffquresh

  nor received any help on this assignment.”
 */

public class Stack<E> {


    private int size = 10;

    E[] stack = (E[]) new Object[size]; // stack created on heap

    // push function to add elements to stack
    public void push(E a) {

        int counter = 0;
        while (stack[counter] != null) {

            counter++;

        }
        stack[counter] = a;


    }
    // pop element removes elements from stack
    public E pop(int i) {
        E[] temp = (E[]) new Object[10];
        temp[0] = stack[i];
        stack[i] = null;
        return temp[0];


    }




}