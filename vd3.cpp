#include <iostream>
using namespace std;

int main()
{
    int a,b,c,i;
    cout << "nhap a \n";
    cin >> a;
    cout << "nhap b \n";
    cin >> b;
    c = ( a < b ? a : b);
    for ( i = c; i > 0 ; i-- )
    {
        if ( (a %i == 0) && (b %i == 0) )
        {
            cout << i;
            break;
        }
        
    }
    
}
