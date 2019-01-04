#include <iostream>
#define size 10 
using namespace std;

int main(int argc, char **argv)
{
    int array[size];
    cout << "element\t" << "value" << endl;  
    for (int i=0; i<size-1; i++)
        array[i] = 2 * i + 2;
    for (int i=0; i<size-1; i++)
        cout << i << "\t" << array [i] << endl;  
    return 0;
}
