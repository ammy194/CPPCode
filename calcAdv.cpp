#include <iostream> 
using namespace std ; 
int main ()

{
    int x , y ; 
    cout << "Enter First Number =  ";
    cin>> x ; 
    
    cout << "Enter Second Number =   ";
    cin>> y ;
    
    int sum = x+y ; "\n";
    int diff = x - y ; "\n";
    int myProd = x * y ; "\n";
    int quotient = x / y ; "\n" ;


    cout <<  " The Sum Is  =        " ;   "\n"; 
    cout << sum ; "\n";
    
    cout <<  "       The Difference Is  =      ";   "\n";
    cout << diff ; "\n";
    
    cout <<  "       The Product Is   =    ";   "\n";
    cout << myProd ; "\n";
    
    cout << "       The Quotient Is    =    ";   "\n" ; 
    cout << quotient ; "\n";
    return 0 ;
}
