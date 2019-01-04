#include <iostream>
#include <math.h>
#define size 5
using namespace std;
void call_reference(int [],int);
void call_value(int);
int main(){
    int a[size]={1,2,3,4,5};
    
    cout << "-- all array call by reference --" << endl;
    
    cout << "original value of array's elements = " << endl;
    for (int i=0; i<size; i++)
        cout << " " << a[i];
    
    cout << "\neffect of call with reference = " <<endl;
    call_reference(a, size);
    for (int i=0; i<size; i++)
        cout << " " << a[i];
    
    cout << endl;    
    
    cout << "\n-- array element call by value --"<< endl; 
    cout << "a[0] = " << a[0] << endl;
    call_value (a[0]);
    cout << "a[0] = " << a[0] << endl << endl;
    return 0;
}
void call_reference(int b[],int x){
    for (int i=0; i<x; i++)
        b[i] *= 2;
}
void call_value (int c){
    cout << "effect of call with a value = " << c*2 << endl;
}
