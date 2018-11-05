#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int max,min;
    int a[10]={123,21,3,4,55,60,7,8,11,10};
    
    max = a[0];
        for (int i=0; i<10; i++){
            if (a[i] > max)
                max = a[i];
        }
    cout << "greatest element of array=" << max << endl;
    
    min = a[0];    
        for (int i=0; i<10; i++){
            if (a[i] < min)
                min = a[i];
        }
    cout << "smallest element of array=" << min << endl;
    return 0;
}