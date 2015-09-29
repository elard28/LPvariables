//Write three functions in C or C++: one that declares a large array stati-
//cally, one that declares the same large array on the stack, and one that
//creates the same large array from the heap. Call each of the subprograms
//a large number of times (at least 100,000) and output the time required
//by each. Explain the results.

#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int *a;

void Estatico(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    static int *a;
    a=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void Explicito(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    a=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void Implicito(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    for (int i = 0; i < 10; ++i)
        a[i]=0;
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
    cout<<"Tiempo 1: "<<time1*1000.0<<endl;

    for(long i=0;i<100000;i++)
        Explicito(time2);
    cout<<"Tiempo 2: "<<time2*1000.0<<endl;

    for(long i=0;i<100000;i++)
        Implicito(time3);
    cout<<"Tiempo 3: "<<time3*1000.0<<endl;
    
    return 0;
}