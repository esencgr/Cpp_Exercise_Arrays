#include <iostream>
#include <math.h>
#define size 5
using namespace std;
int main(){
     int array[size],sum=0;
     cout << "enter array[5]= ";

        for (int i=0; i<=size-1; i++){
            cin >> array[i];
            sum += array[i];
        }

    cout << " sum of array element = "<< sum << endl;
    return 0;
}
