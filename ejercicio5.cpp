#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int x;

void fn()
{
    x = 21;
    cout<<"Variable global"<<x<<endl;
    int x;
    x = 42;
    cout<<"Variable local"<<x<<endl;
}

int main()
{
    fn();
    cout<<"Variable global"<<x<<endl;
    
    return 0;
}