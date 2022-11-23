#include <bits/stdc++.h>
using namespace std;

class Sach
{
private:
    string ma_sach, ten_sach, ten_tacgia;
    int nxb;

public:
    Sach()
    {
        ma_sach = ten_sach = ten_tacgia = "";
        nxb = 0;
    }

    string get_tensach()
    {
        return ten_sach;
    }

    int get_nxb()
    {
        return nxb;
    }

    void Nhap()
    {
        cout << "Nhap ma sach: ";
        cin.ignore();
        getline(cin, ma_sach);
        cout << "Nhap ten sach: ";
        // cin.ignore();
        getline(cin, ten_sach);
        cout << "Nhap ten tac gia: ";
        // cin.ignore();
        getline(cin, ten_tacgia);
        cout << "Nhap nam xuat ban: ";
        cin >> nxb;
    }

    void Xuat()
    {
        cout << setw(15) << left << ma_sach;
        cout << setw(20) << left << ten_sach;
        cout << setw(20) << left << ten_tacgia;
        cout << setw(10) << left << nxb << endl;
    }
};

int main()
{
    Sach *a;

    // Nhap n cuon sach
    int n;
    cout << "Nhap so luong dau sach: ";
    cin >> n;

    a = new Sach[n + 1];

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }

    cout << setw(15) << left << "Ma Sach" << setw(20) << left << "Ten Sach" << setw(20) << left << "Tac Gia" << setw(10) << left << "NXB" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }

    // Tim 1 cuon sach theo ten
    string x;
    cout << "\nNhap ten sach muon tim: ";
    cin.ignore();
    getline(cin, x);

    int ok = 0, vt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_tensach() == x)
        {
            ok = 1;
            vt = i;
            break;
        }
    }

    if (ok)
    {
        cout << "\nDa tim thay sach !" << endl;
        cout << setw(15) << left << "Ma Sach" << setw(20) << left << "Ten Sach" << setw(20) << left << "Tac Gia" << setw(10) << left << "NXB" << endl;
        a[vt].Xuat();
    }
    else
    {
        cout << "\nKhong tim thay sach can tim !" << endl;
    }

    // In cac sach xuat ban tu nam 2010 tro ve truoc

    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_nxb() <= 2010)
        {
            check = 1;
            break;
        }
    }

    if (check)
    {
        cout << "\nCac sach xuat ban truoc nam 2010: " << endl;
        cout << setw(15) << left << "Ma Sach" << setw(20) << left << "Ten Sach" << setw(20) << left << "Tac Gia" << setw(10) << left << "NXB" << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].get_nxb() <= 2010)
            {
                a[i].Xuat();
            }
        }
    }
    else
    {
        cout << "\nKhong co cuon sach nao xuat ban truoc nam 2010 !" << endl;
    }
    return 0;
}