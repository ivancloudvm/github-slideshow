#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Escriba el año: ";
    cin >> n;
    if(n%4 == 0 && (n%100 != 0 || n%400 == 0)){
        cout<< "El año es bisiesto" << "\n";

    }
    else
    {
        cout << "El año no es bisiesto";
    }
    
    
    return 0;
}
