#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"Enter first leg"<<endl;
    int leg1;
    cin>> leg1;
    cout<<"Enter second leg"<<endl;
    int leg2;
    cin>> leg2;
    cout<<"Hupotenuse = "<<sqrt(leg1*leg1+leg2*leg2)<<endl;
}