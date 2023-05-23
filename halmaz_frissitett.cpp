#include <iostream>
#include <set>

using namespace std;

int main()
{
    /*
    Halmazt akkor használunk, mikor az ismétlõdéseket el akarjuk kerülni, vagy meg akarjuk szüntetni.
    A halmazban az elemeknek nincs sorszámuk, így nem tudunk azzal hivatkozni rájuk. Ezért a memória címekkel dolgoznunk,
    és egy iterátor segítségével tudunk végigmenni rajta.
    */

   set<string>halmaz;
   halmaz.insert("alma");
   halmaz.insert("szilva");
   halmaz.insert("egres");
   halmaz.insert("barack");
   halmaz.insert("eper");
   halmaz.insert("alma"); //ez az alma mér nem kerül be, mert már van benne alma
   cout<<halmaz.size()<<endl; // kiírja a halmaz méretét

   // halmaz elemek kiírása

   set<string> :: iterator iter= halmaz.begin(); // A bejáráshoz szükéseges muatót a halmaz elejére tesszük.
   for(iter = halmaz.begin(); iter!=halmaz.end() ; ++iter){

    cout<<*iter<<" ";
   } // növekvõbe rendezve ír ki
   cout<<"\n";

   // Versenyzõknek ez ugyan az mint a felette lévõ forciklus
   // ehhez c++11 et be kell kapcsolni
   // settings -> compiler -> c++11 et pipáld be

   for( auto x : halmaz){
      cout << x << " ";
   }

   cout << endl;

    return 0;
}
