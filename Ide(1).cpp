#include <iostream>
using namespace std;

int main()
{
    int max = -2147483647 ;
    int min = 2147483647 ;
    int num ;

    while( cout<<"Unesi brojeve (unesi slovo da prekines proces)" << '\n' &&
           cin >> num )
    {
        cout<<"uneti broj je: " << num << '\n'; 
        if( num>max ) max = num;
        if( num<min ) min = num;
    }

    cout << "Najveci broj je: " << max << '\n'
         << "Najmanji broj je: " << min << '\n' ;
}