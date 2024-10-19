#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    cout<<"Enter value for 'A'"<<endl;
    cin>>a;
    cout<<"Enter value for 'B'"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"C=A+B , D=A-B, E=A/B, F=A*B"<<endl;
    c = a+b;
    d = a-b;
    e = a/b;
    f = a*b;
    cout<<"Value of C is : "<<c<<endl;
    cout<<"Value of D is : "<<d<<endl;
    cout<<"Value of E is : "<<e<<endl;
    cout<<"Value of F is : "<<f;
    return 0;
}
