#include <iostream>
#define size 10
using namespace std;
int binary_search (int a[],int value){
    int start = 0, finish = size;
        while (start <= finish){
            int i = (start + finish) / 2;
            if (a[i]== value)
                return i;
            else if (a[i] > value)
                finish = i - 1;
            else 
                start = i + 1;
        }
 return -1;
}
int main(){
    
    int array[size] = { 2,4,6,8,10,12,14,16,18,20};
    cout << "array = ";
    for (int k=0; k<size; k++)
        cout << array[k] << " ";
    cout << endl << endl;
    
    int value;
    cout << "searched value =" ;
    cin >> value;
    
    int position = binary_search (array,value);
 
    if (position == -1)
        cout << "searched value not find in array..." << endl << endl;
    else 
        cout << "searched value find in " << position << ". indeces.." << endl << endl;
return 0;
}