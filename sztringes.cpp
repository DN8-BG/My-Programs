#include <iostream>
#include<string>;
using namespace std;

int main()
{
    string szoveg = "Ez a szoveg";
    cout<<szoveg.size()<<endl; // A string hossza. A szõköz is beleszámít!!
    for(int i=0;i<szoveg.size();i++){
        cout<<szoveg[i]<<i;
        //A szöveg elemeire indexükkellehet hivatkozni. az indexelés nullával kezdõdik és a szóköz is indexelt.
    }
    cout<<"\n";
    cout<<szoveg.substr(5,2)<<endl;// szöveg egy részét adja vissza. ( mettõl, hány karaktert.
    string keresett="szo"; //Ezt keressük a szovegben.
    cout<<szoveg.find(keresett)<<endl; //megadja, hogyhányadik karaktertõl található
    cout<<szoveg.find_last_of("z")<<endl;//megadja az utolsó elõfordulás kezdetét
}
