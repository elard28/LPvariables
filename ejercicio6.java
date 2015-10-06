import java.io.*;
import java.lang.*;
import java.util.*;

class Test
{
    public static void main (String[] args) 
    {
        int i=100;
	    System.out.println("Global: "+i);
		for(int i=0;i<10;i++)
		    System.out.println("Local: "+i);
		System.out.println("Global: "+i);
    }
}