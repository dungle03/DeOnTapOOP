#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Xe
{
private:
    int bienso;
    double trongluong;

public:
    int get_bienso()
    {
        return bienso;
    }
    double get_trongluong()
    {
        return trongluong;
    }
    void Nhap()
    {
        cout << "Nhap bien so: ";
        cin >> bienso;
        cout << "Nhap trong luong xe: ";
        cin >> trongluong;
    }

    void Xuat()
    {
        // cout << setw(10) << left << bienso << setw(10) << left << trongluong << endl;

        cout << "Bien So: " << bienso << endl;
        cout << "Trong luong Xe: " << trongluong << endl;
    }
};

class XeBus : public Xe
{
private:
    int sochongoi;

public:
    int get_sochongoi()
    {
        return sochongoi;
    }
    void Nhap()
    {
        Xe ::Nhap();
        cout << "Nhap so cho ngoi xe Bus: ";
        cin >> sochongoi;
    }

    void Xuat()
    {
        Xe ::Xuat();
        // cout << setw(10) << left << sochongoi << endl;
        cout << "So cho ngoi: " << sochongoi << endl;
    }
};

class XeTai : public Xe
{
private:
    double taitrong;

public:
    double get_taitrong()
    {
        return taitrong;
    }
    void Nhap()
    {
        Xe ::Nhap();
        cout << "Nhap tai trong cua Xe Tai: ";
        cin >> taitrong;
    }
    void Xuat()
    {
        Xe ::Xuat();
        // cout << setw(10) << left << taitrong << endl;

        cout << "Tai trong Xe: " << taitrong << endl;
    }
};

int main()
{
    XeBus *a;
    XeTai *b;

    int n, m;
    cout << "Nhap n Xe Bus va m Xe Tai: " << endl;
    cin >> n >> m;

    a = new XeBus[n + 1];
    b = new XeTai[m + 2];

    // Nhap n Xe bus va m Xe Tai
    cout << "Nhap cac Xe Bus: " << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }
    cout << "Nhap cac Xe Tai: " << endl;
    for (int i = 0; i < m; i++)
    {
        b[i].Nhap();
    }

    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        b[i].Xuat();
    }

    // In ds cac Xe Tai co trong luong max ma co tai trong <= 5 tan

    double Max = 0;
    int ok = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i].get_trongluong() > Max)
        {
            Max = b[i].get_trongluong();
            // ok = 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (b[i].get_trongluong() == Max && b[i].get_taitrong() <= 5)
        {
            ok = 1;
        }
    }

    if (ok)
    {
        cout << "DS xe tai co trong luong lon nhat ma co tai trong k qua 5 tan: " << endl;

        for (int i = 0; i < m; i++)
        {
            if (b[i].get_trongluong() == Max && b[i].get_taitrong() <= 5)
            {
                b[i].Xuat();
            }
        }
    }
    else
    {
        cout << "Khong co xe tai nao !" << endl;
    }

    return 0;
}