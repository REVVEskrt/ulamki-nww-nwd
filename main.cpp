  #include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(a != b)
    {
        if (a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}

int nww(int a, int b)
{
    return a/nwd(a,b)*b;
}
int main()
{
    int L1, M1, L2, M2, l, wm, rob1, rob2, L3, M3, L4, M4;


    cout << "wprowadz L1: ";
    cin >> L1;
    cout << "wprowadz M1: ";
    cin >> M1;
    cout << "wprowadz L2: ";
    cin >> L2;
    cout << "wprowadz M2: ";
    cin >> M2;

    wm=nww(M1,M2);
    L3=L1*L2;

    L4=L1/L2;
    M4=M1/M2;

    cout << "wspolny mianownik M1 i M2: " << wm <<endl;

    rob1=wm/M1;
    rob2=wm/M2;
    L1=L1*rob1;
    L2=L2*rob2;
    l=L1+L2;

    cout << "wynik dodawania: " << l << "/" << wm << endl;

    rob1=wm/M1;
    rob2=wm/M2;
    l=L1-L2;

    cout << "wynik odejmowania: " << l << "/" << wm << endl;

    M3=M1*M2;

    cout << "wynik mnozenia: " << L3 << "/" << M3 << endl;

    cout << "wynik dzielenia: " << L4 << "/" << M4 << endl;


    return 0;
}
