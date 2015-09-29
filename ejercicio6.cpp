#include <iostream>

using namespace std;

int main()
{
    int x=100;
	for(int i=0;i<10;i++)
	{
	    cout<<"Global: "<<x<<endl;
	    int x=i;
	    cout<<"Local: "<<x<<endl;
	}
	
	return 0;
}