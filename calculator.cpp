# include <iostream>
using namespace std;
int main()
{
    
int x , y ;
int sum(int, int);
cout << "Enter Your First Number   ";
cin>> x;

cout << "Please Enter Your Second Number   ";
cin >> y;

cout << "Your Sum Is   :";
cout << sum (x,y) ;
return 0 ;
}

int sum(int a, int b){
    return a+b;
}