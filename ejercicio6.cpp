#include <iostream>

using namespace std;

int main()
{
    int i=100;
    cout<<"Global: "<<i<<endl;
	for(int i=0;i<10;i++)
	    cout<<"Local: "<<i<<endl;
	cout<<"Global: "<<i<<endl;

	return 0;
}

//la variable creada dentro del for no se admite como ambito dinamico en java y csharp