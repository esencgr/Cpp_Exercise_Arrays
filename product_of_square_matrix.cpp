#include <iostream>
#include <math.h> 
#include <time.h>
#include <stdlib.h>
#define size 2
using namespace std;
void matrix_enter(int b[size][size]){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             cin >> b[i][j];
        }
    }
}

void matrix_print (int a[size][size]){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             cout << "    " << a[i][j];
        }
    cout << endl;
    }
}

void matrix_product(int a[size][size], int b[size][size]){
    int  c[size][size];
    int sum;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            sum = 0;
            for (int k=0; k<size; k++){
                sum += a[i][k] * b[k][j];
            }
        c[i][j] = sum;
        cout << "   " << c[i][j];
        }
    cout << endl;
    }
}
int main(){  
    int a[size][size], b[size][size];
    
    cout << "enter array elements = " << endl;
    matrix_enter (a);
    cout << "--a array--" << endl;
    matrix_print (a);
    
    cout << "enter array element" << endl;
    matrix_enter (b);
     cout << "--b array--" << endl;
    matrix_print (b);
    
    cout << " -- matrix product --" << endl;
    matrix_product(a,b);
return 0;
}
