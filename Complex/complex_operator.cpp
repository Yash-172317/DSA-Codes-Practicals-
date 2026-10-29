#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;

    public:
    Complex() {
     real=0;
     imag=0;
    
    }
    Complex (float r, float i)
    {
        real=r;
        imag=i;
    }
    ~Complex()
    {

    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator+(Complex c)
    {
        return Complex(real+c.real,imag+c.imag);
    }
    Complex operator-(Complex c)
    {
        return Complex(real-c.real,imag-c.imag);
    }
    Complex operator*(Complex c)
    {
        float r = real*c.real-imag*c.imag;
        float i = real*c.imag+imag*c.real;
        return Complex(r,i);
    }

    };  

    int main()
    {
    Complex c1(4,5),c2(2,3);

    cout<<"\nFirst Complex number:";
    c1.display();
    cout<<"Second Complex Number:";
    c2.display();

    Complex sum=c1+c2;
    cout<<"\nsum:";
    sum.display();

    Complex diff=c1-c2;
    cout<<"Diffrence:";
    diff.display();

    Complex prod=c1*c2;
    cout<<"Product:";
    prod.display();

    return 0;
    }
   

  /*   PS D:\yash jagtap S2> cd "d:\yash jagtap S2\" ; if ($?) { g++ complex_operator.cpp -o complex_operator } ; if ($?) { .\complex_operator }

First Complex number:4+5i
Second Complex Number:2+3i

sum:6+8i
Diffrence:2+2i
Product:-7+22i    */

    


