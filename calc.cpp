#include  <iostream>
using namespace std; 
int main ()  
{
    
int x , y ;
int sum(int, int) ;
cout << "Enter Your First Number"; 
cin >> x ;

cout << "enter your second number";
cin >> y ;
cout << "Your sum is" ;
int z= sum(x,y);
cout << z;
return 0 ;
}

int sum(int x , int y){
    return x+y;
}

