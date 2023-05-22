// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");

//Example:
int[] Tomb = { 1, 2, 0, 5, 6, 0, 7 };
int n = Tomb.Length;

//P tulajdonságfüggvény
bool P(int[] X, int i)
{
    bool p = false;
        if (X[i] == 0)
        {
            p = true;
        }
    return p;
}

//Egyszerű programozási tételek
#region Sorozatszamitas 2.1
int Sorozatszamitas(int[] X, int n)
{
    int ertek = 0;
    for (int i = 0; i < n; i++)
    {
        ertek += X[i];
    }
    return ertek;
}
Console.Write("2.1: ");
Console.WriteLine(Sorozatszamitas(Tomb, n));
#endregion

#region Eldontes 2.2
bool Eldontes(int[] X, int n /*, bool P */)
{
    //Alap érték beállítások:
    bool van = false;
    int i = 0;
    while (i <= n && !P(X, i))
    {
        i += 1;
    }
    van = (i <= n);
    return van;
}
Console.Write("2.2: ");
Console.WriteLine(Eldontes(Tomb, n));
#endregion

#region Kivalasztas 2.6
int Kivalasztas(int[] X, int n /*, bool P */)
{
    int i = 0;
    int idx = 0;
    while (!P(X, i))
    {
        
        i += 1;
    }
    idx = i;
    return idx;
}
Console.Write("2.6: ");
Console.WriteLine(Kivalasztas(Tomb, n));
#endregion

#region Megszamlalas 2.9
int Megszamlalas(int[] X, int n /*, bool P */)
{
    int db = 0;
    for (int i = 0; i < n; i++)
    {
        if (P(X, i))
        {
            db += 1;
        }
    }
    return db;
}
Console.Write("2.9: ");
Console.WriteLine(Megszamlalas(Tomb, n));
#endregion

#region Maximumkivalasztas 2.10
int Maximumkivalasztas(int[] X, int n)
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (X[i] > X[max])
        {
            max = i; 
        }
    }
    return max;
}
Console.Write("2.10: ");
Console.WriteLine(Maximumkivalasztas(Tomb, n));
#endregion

//Ősszetett programozási tételek
