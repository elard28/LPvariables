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

//la variable creada dentro del for no se admite en java y csharp debido a que onsideran que la variable ya existe