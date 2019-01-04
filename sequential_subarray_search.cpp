#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1,2,3}, size_a = 3;
    int b[10] = {9,5,1,2,3,7,8,1,2,3} , size_b = 10; 
    
    cout << " a array = ";
    for (int i=0; i<=size_a-1; i++){
        cout << a[i] << " ";
        }
    cout << endl;
    
    cout << " b array = ";
    for (int i=0; i<=size_b-1; i++){
        cout << b[i] << " ";
        }
    cout << endl;
    
    for (int i=0; i<=size_b-1; i++){
        bool equal = true;
        for (int j=0; j<=size_a-1; j++){
            if (a[j] != b[i+j]){
            equal = false;
            break;
            }
        }
        if (equal)
            cout << " a is sequantial sub-array of b and start " << i << ". element" << endl;
    }
      
    return 0;
}
