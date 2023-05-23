#include <iostream>
#include <set>

using namespace std;

int main()
{
    /*
    Halmazt akkor haszn�lunk, mikor az ism�tl�d�seket el akarjuk ker�lni, vagy meg akarjuk sz�ntetni.
    A halmazban az elemeknek nincs sorsz�muk, �gy nem tudunk azzal hivatkozni r�juk. Ez�rt a mem�ria c�mekkel dolgoznunk,
    �s egy iter�tor seg�ts�g�vel tudunk v�gigmenni rajta.
    */

   set<string>halmaz;
   halmaz.insert("alma");
   halmaz.insert("szilva");
   halmaz.insert("egres");
   halmaz.insert("barack");
   halmaz.insert("eper");
   halmaz.insert("alma"); //ez az alma m�r nem ker�l be, mert m�r van benne alma
   cout<<halmaz.size()<<endl; // ki�rja a halmaz m�ret�t

   // halmaz elemek ki�r�sa

   set<string> :: iterator iter= halmaz.begin(); // A bej�r�shoz sz�k�seges muat�t a halmaz elej�re tessz�k.
   for(iter = halmaz.begin(); iter!=halmaz.end() ; ++iter){

    cout<<*iter<<" ";
   } // n�vekv�be rendezve �r ki
   cout<<"\n";

   // Versenyz�knek ez ugyan az mint a felette l�v� forciklus
   // ehhez c++11 et be kell kapcsolni
   // settings -> compiler -> c++11 et pip�ld be

   for( auto x : halmaz){
      cout << x << " ";
   }

   cout << endl;

    return 0;
}
