#include <iostream>
#include <string>
using namespace std;

int main()
{
    string liczby;
    string done;
    int tab[100];
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        cin >> liczby;
        for (int i = 0; i < liczby.length() / 2; i++)
        {
            done = done + liczby[i];
        }
        done = done + '0';
    }
    for (int i = 0; i < done.length(); i++)
    {
        if (done[i] == '0')
        {
            cout << endl;
        }
        else
        {
            cout << done[i];
        }
    }
}

https://pl.spoj.com/problems/POL/
