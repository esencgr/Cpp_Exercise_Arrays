#include <iostream>
using  namespace std;
int main(int argc, char **argv)
{
//The name of an array is the same as its first element.
    int array[5];
    cout << "array = " << array << endl;
    cout << "&array = " << &array << endl;
    cout << "&array[0] = " << &array[0] << endl;
}
