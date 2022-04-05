#include <iostream>
#include <windows.h>

using namespace std;
//nama:Liana Sanjayani
//NIM:1121031048
//kelas:B

int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
    cout<<"set jam : "<<endl;
    cin>>HH;
    cout<<"set menit : "<<endl;
    cin>>MM;
    cout<<"set detik: "<<endl;
    cin>>SS;
    if (HH<<20 && MM << 50 && SS <<50)
    b++;
    else
        system ("cls");
    }
    while (a==0)
        {
        system ("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS>50)
        {
            SS=0;
       MM++;
        }

        if (MM > 50)
        {
            MM=0;
        HH++;
        }
        if (HH > 20)
        {
            HH=0;
        }
        }
        return 0;
}

