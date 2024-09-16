#include<iostream>
using namespace std;
int main()
{
int luas,a,b;
cout<<"Pilih bentuk untuk menemukan luas:"<<endl;
cout<<"Bujur sangkar(1), segi empat(2), segitiga(3)"<<endl;
cin>>luas;

switch(luas)
{
    case 1:
        cout<<"Masukan sisi:";
        cin>>a;
        cout<<"Luas bujur sangkar = "<<(a*a);
        break;
    case 2:
        cout<<"Masukan panjang:";
        cin>>a;
        cout<<"Masukan lebar:";
        cin>>b;
        cout<<"Luas segi empat = "<<(a*b);
        break;
    case 3:
        cout<<"Masukan alas:";
        cin>>a;
        cout<<"Masukan tinggi:";
        cin>>b;
        cout<<"Luas segitiga = "<<((a*b)/2);
        break;
}
return 0;
}
