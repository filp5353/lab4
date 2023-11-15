#include <iostream>

using namespace std;

int main()
{
    /*int n; //zad 1
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 1;
        cout << tab[i]<<" ";
    }
    delete[] tab;*/
   /* int n,min=11;  //zad2
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 10+1;
        cout << tab[i] << " ";
        if (tab[i]<=min)
        {
            min = tab[i];
        }
    }
    cout <<"min " << min;
    delete[] tab;*/
    /*int n,min;  //zad 2
    cin >> n;
    srand(time(NULL));
    double* tab = new double[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand()%10+1;
        cout << tab[i] << " ";
    }
    cout << endl;
    min = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (tab[i] <= min)
        {
            min = tab[i];
        }
    }
    cout <<"min " << min;
    delete[] tab;*/

   /*int n, tmp=0;   //zad 3
    cin >> n;
    int j = n-1;
    int* tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 10 + 1;
        cout << tab[i]<<" ";
    }
    cout << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << tab[i]<<" ";
    }
    
    delete[] tab;*/

    /*int tab[10][10]; //zad 4
    int a=1, b=1;
    for (int i = 0; i < 10; i++)
    {
        b = 1;
        for (int j = 0; j < 10; j++)
        {
            tab[i][j] = a*b;
            b++;
        }
        a++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << tab[i][j]<<" ";
        }
        cout << endl;
    }*/
    /*int n, a = 1;
    cin >> n;
    int g = 0, d = n, p = 0, l = n;
    int** tab = new int* [n];
    for (int i = 0; i < n; i++)
    {
        tab[i] = new int [n];
    }
    int t = 0;
    while (g != d || p != l)
    {
        while (t < d)
        {
            tab[t][g] = a;
            t++;
            a++;
        }
        t = n-1;
        g++;
        while (t >=p)
        {
            tab[l][t] = a;
            t--;
            a++;
        }
        l--;
        t = 0;
        while (t < g)
        {
            tab[t][d] = a;
            t++;
            a++;
        }
        d--;
        t = n;
        while (t >= 0)
        {
            tab[p][t] = a;
            t--;
            a++;
        }
        p++;
        t = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] tab[i];
    }
    delete[] tab;*/
}