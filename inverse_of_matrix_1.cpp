#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//#define size 4
using namespace std;

int main(){
    srand(time(NULL));
    int size;
    cout << " enter array's size = ";
    cin >> size;

    double a[size][size],b[size][size];

    cout << "--a array--" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             a[i][j] = 1 + rand() % 8;
             cout << a[i][j] << "\t";
        }
    cout << endl;
    }

    cout << "-- unit matrix --" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             if ( i == j)
                b[i][j] = 1;
             else
                b[i][j] = 0;
        cout << b[i][j] << "\t";
        }
    cout << endl;
    }

    cout << "--inverse matrix --" << endl;
    double d,k;
    for (int i=0; i<size; i++) {
        d = a[i][i];
        for (int j=0; j<size; j++){
            a[i][j] = a[i][j] / d;
            b[i][j] = b[i][j] / d;
        }

        for (int x=0; x<size; x++){
            if (x != i){
                k = a[x][i];
                for (int j=0; j<size; j++){
                    a[x][j] = a[x][j] - (a[i][j] * k);
                    b[x][j] = b[x][j] - (b[i][j] * k);
                }
            }
        }
    }

    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++)
             cout << (double)b[i][j] << " \t";
    cout << endl;
    }

}
