#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char string1 [20], string2[]="cagriesen";
    cout << " enter a string =";
    cin >> string1;
    cout << "string1 = " << string1 << endl;
    cout << "string2 = " << string2 << endl;

    for (int i=0; string1[i]!= '\0'; i++)
        cout << string1[i] << " ";

cout << endl;
    return 0;
}
