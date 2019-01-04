#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{    
    int a[3][3];
    cout << "-a array-" << endl;
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
            a[i][j] = 1+ rand() % 6;
            cout << " " << a[i][j];
        }
    cout << endl;
    }
    cout << endl;
    
    int temp;
    for (int i=0; i<=2; i++){
        for (int j=i+1; j<=2; j++){
            temp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = temp;
        }
    cout << endl;
    }
    
    cout << "- transpoze -" << endl;
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
            cout << " " << a[i][j] ;
        }
    cout << endl;
    }
    return 0;
}
