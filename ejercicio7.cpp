#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int *a;

void array1(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    a=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void array2(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    int *a=new int[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

void array3(double &secs)
{
    clock_t t_ini, t_fin;
    t_ini = clock();
    int a[10];
    t_fin = clock();
    secs += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
}

int main()
{
    double time1=0.0;
    double time2=0.0;
    double time3=0.0;
    
    for(long i=0;i<100000;i++)
    {
        array1(time1);
        array2(time2);
        array3(time3);
    }
    
    cout<<"Tiempo 1: "<<time1*1000.0<<endl;
    cout<<"Tiempo 2: "<<time2*1000.0<<endl;
    cout<<"Tiempo 3: "<<time3*1000.0<<endl;
    
    return 0;
}