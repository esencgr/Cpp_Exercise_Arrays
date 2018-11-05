#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void bubble_sort (int b[],int size){
    int temp;
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if (b[j] > b[j+1]){
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
}
int main(){
    srand(time(NULL));
    int size;
    
    cout << "enter size = ";
    cin >> size;
    cout << "array = "; 
    
    int n[size];
        for (int i=0; i<size; i++){
            n[i] = 1 + rand() % 6;
            cout << n[i] << "  ";
        }
    cout << endl;
    
    bubble_sort (n,size);
        
    cout << "buble sort array = "; 
        for (int i=0; i<size; i++)
            cout << n[i] << "  ";
        
    cout << endl;
    
}