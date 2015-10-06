#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int *b;
int c[10];

void Estatico(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    static int *a;
    a=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void heapExplicito(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    b=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void heapImplicito(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    for (int i = 0; i < 10; ++i)
        c[i]=0;
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

int main()
{
    double time1=0.0;
    double time2=0.0;
    double time3=0.0;
    
    for(long i=0;i<100000;i++)
        Estatico(time1);
    cout<<"Tiempo VE: "<<time1*1000.0<<endl;

    for(long i=0;i<100000;i++)
        heapExplicito(time2);
    cout<<"Tiempo VDHE: "<<time2*1000.0<<endl;

    for(long i=0;i<100000;i++)
        heapImplicito(time3);
    cout<<"Tiempo VDHI: "<<time3*1000.0<<endl;
    
    return 0;
}

// Demora mas tiempo la variable estatica debito a que la esta creando para que actue como variable global en tiempo de ejecucion 
// mientras que la que toma menos tiempo es la variable dinamica en heap implicito debido a que esta siendo creada en tiempo de compilacion