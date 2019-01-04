#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void linear_search (int b[],int value,int size){
     int count = 0;
     for (int i=0; i<size; i++){
         if (value == b[i]){
             count++;
             cout << "searched value in " << i << ". indeces" << endl;
         }
    }
    if (count == 0)
        cout << "searched value not find in array..";
    else 
        cout << "number of total searched value = " << count << endl;
}
int main(){
    srand(time(NULL));
    int size;
    
    cout << "enter size = ";
    cin >> size;
    cout << "array = "; 
    
    int n[size],value;
        for (int i=0; i<size; i++){
            n[i] = 1 + rand() % 6;
            cout << n[i] << "  ";
        }
    cout << endl;
    
    cout << "searched value =" ;
    cin >> value;
    
    linear_search (n,value,size);

return 0;
}