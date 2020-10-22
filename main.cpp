#include <iostream>

//Variables globales y macros
#define TAM (int)10

using namespace std;

int main()
{
    char a[TAM]="AB11CD44";
    for(int var=0;var<TAM;var++)
    {
        cout <<a[var] << endl;
    }
    return 0;
}
