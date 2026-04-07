#include<iostream>
using namespace std;
 
int main()
{
    float cambio; int cambioint, m10=0, m5=0, m2=0, m1=0, m50c=0;
    do
    {
        cout << "Cambio?: "; cin >> cambio;
        cambioint = (int)cambio;
    }while((cambio - cambioint) != 0 && (cambio - cambioint) != 0.50);
    while(cambio != 0)
    {
        if(cambio>=10)
        {
            m10++;
            cambio-=10;
        }
        else if(cambio>=5)
        {
            m5++;
            cambio-=5;
        }
        else if(cambio>=2)
        {
            m2++;
            cambio-=2;
        }
        else if(cambio>=1)
        {
            m1++;
            cambio-=1;
        }
        else if(cambio>=0.5)
        {
            m50c++;
            cambio-=0.5;
        }
    }
    cout << m10 << ", " << m5 << ", " << m2 << ", " << m1 << ", " << m50c;
}

 
