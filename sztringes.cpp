#include <iostream>
#include<string>;
using namespace std;

int main()
{
    string szoveg = "Ez a szoveg";
    cout<<szoveg.size()<<endl; // A string hossza. A sz�k�z is belesz�m�t!!
    for(int i=0;i<szoveg.size();i++){
        cout<<szoveg[i]<<i;
        //A sz�veg elemeire index�kkellehet hivatkozni. az indexel�s null�val kezd�dik �s a sz�k�z is indexelt.
    }
    cout<<"\n";
    cout<<szoveg.substr(5,2)<<endl;// sz�veg egy r�sz�t adja vissza. ( mett�l, h�ny karaktert.
    string keresett="szo"; //Ezt keress�k a szovegben.
    cout<<szoveg.find(keresett)<<endl; //megadja, hogyh�nyadik karaktert�l tal�lhat�
    cout<<szoveg.find_last_of("z")<<endl;//megadja az utols� el�fordul�s kezdet�t
}
