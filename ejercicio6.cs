using System;
 
public class Test
{
	public static void Main()
	{
		int i=100;
	    Debug.log("Global: "+i);
		for(int i=0;i<10;i++)
		    Debug.log("Local: "+i);
		Debug.log("Global: "+i);
	}
}