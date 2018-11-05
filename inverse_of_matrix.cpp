#include <iostream>

using namespace std;

int main(){
    
    double a[4][4]={1,2,3,4,7,11,9,0,9,8,7,6,1,12,3,14};
    double b[4][4];
    
    cout << "--a array--" << endl;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++)
             cout << a[i][j] << "\t";
    cout << endl;
    }
    
    cout << "-- unit matrix = " << endl;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
             if ( i == j)
                b[i][j] = 1;
             else 
                b[i][j] = 0;
        cout << b[i][j] << "\t";
        }
    cout << endl;
    }
    
    double d,k;
    for (int i=0; i<4; i++) {
        d = a[i][i];
        for (int j=0; j<4; j++){
            a[i][j] = a[i][j] / d;
            b[i][j] = b[i][j] / d;            
        }
        
        for (int x=0; x<4; x++){
            if (x != i){
                k = a[x][i];
                for (int j=0; j<4; j++){
                    a[x][j] = a[x][j] - (a[i][j] * k);
                    b[x][j] = b[x][j] - (b[i][j] * k);
                }
            }
        }
     }
    cout << "--inverse a array--" << endl;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++)
             cout << (double) b[i][j] << " \t";
        
    cout << endl;
    }
    
}