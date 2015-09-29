import java.io.*;
import java.util.*;

class Main
{
    int x=0;
    
    public void fn()
    {
        x = 21;
        System.out.println("Variable global "+x);
        int x;
        x = 42;
        System.out.println("Variable local "+x);
    }
    
    public static void main (String[] args) 
    {
        fn();
        System.out.println("Variable global "+x);
    }
}