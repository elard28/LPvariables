using System;
 
public class Test
{
	public static void Main()
	{
		int x=100;
		for(int i=0;i<10;i++)
		{
		    Console.WriteLine("Global: "+x);
		    int x=i;
		    Console.WriteLine("Local: "+x);
		}
	}
}