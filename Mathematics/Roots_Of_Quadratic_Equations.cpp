#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the values of coefficiants a,b,c with sign considering your equation is of standard format:"<<endl;
    cin>>a>>b>>c;
    int discriminant = b*b-4*a*c;
    if(discriminant<0)
    cout<<"Roots are Complex"<<endl;
    else{
    double r1,r2;
    r1= (-(float)b+ sqrt (b*b - 4.0*a*c))/ 2.0*a;
    r2= (-b- sqrt (b*b - 4.0*a*c))/ 2.0*a;
    cout << "The roots of the equation are:"<<r1<<','<<r2;
    }
    return 0;
}