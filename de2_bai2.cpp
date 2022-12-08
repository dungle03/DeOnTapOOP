#include <bits/stdc++.h>
using namespace std;

class QLH
{
private:
    string mahang, tenhang, xuatxu;
    int loaihang, soluong;

public:
    void Nhap()
    {
        cout << "Nhap ma hang: ";
        cin.ignore();
        getline(cin, mahang);
        cout << "Nhap ten hang: ";
        getline(cin, tenhang);
        cout << "Nhap xuat xu: ";
        getline(cin, xuatxu);
        cout << "Nhap loai hang (1/2/3): ";
        cin >> loaihang;
        cout << "Nhap so luong: ";
        cin >> soluong;
    }

    void Xuat()
    {
        cout << setw(10) << left << mahang;
        cout << setw(10) << left << tenhang;
        cout << setw(10) << left << xuatxu;
        cout << setw(10) << left << loaihang;
        cout << setw(10) << left << soluong;
    }

    string get_tenhang()
    {
        return tenhang;
    }

    int get_loaihang()
    {
        return loaihang;
    }

    int get_soluong()
    {
        return soluong;
    }
};

class DienTu : public QLH
{
private:
    int tgbh;

public:
    void Nhap()
    {
        QLH::Nhap();
        cout << "Nhap thoi gian bao hanh (theo thang): ";
        cin >> tgbh;
    }

    void Xuat()
    {
        QLH ::Xuat();
        cout << setw(10) << left << tgbh << endl;
    }

    int get_tgbh()
    {
        return tgbh;
    }
};

int main()
{
    int n;
    cout << "Nhap so luong hang: ";
    cin >> n;

    DienTu a[n + 1];

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }

    cout << setw(10) << left << "Ma hang" << setw(10) << left << "Ten Hang" << setw(10) << left << "Xuat Xu" << setw(10) << left << "Loai" << setw(10) << left << "So luong" << setw(10) << left << "TGBH" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }

    //

    // int dem1 = 0, dem2 = 0, dem3 = 0;
    int tong1 = 0, tong2 = 0, tong3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_loaihang() == 1 && a[i].get_tgbh() >= 12)
        {
            // dem1++;
            tong1 += a[i].get_soluong();
        }
        else if (a[i].get_loaihang() == 2 && a[i].get_tgbh() >= 12)
        {
            // dem2++;
            tong2 += a[i].get_soluong();
        }
        else if (a[i].get_loaihang() == 3 && a[i].get_tgbh() >= 12)
        {
            // dem3++;
            tong3 += a[i].get_soluong();
        }
    }

    cout << "Loai 1 co: " << tong1 << " thoa man" << endl;
    cout << "Loai 2 co: " << tong2 << " thoa man" << endl;
    cout << "Loai 3 co: " << tong3 << " thoa man" << endl;

    //
    string x;
    cout << "Nhap ten mat hang can tim: ";
    cin.ignore();
    getline(cin, x);

    int vt = 0, ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i].get_tenhang())
        {
            vt = i;
            ok = 1;
            break;
        }
    }

    if (ok)
    {
        cout << "\nDa tim thay mat hang !" << endl;
        cout << setw(10) << left << "Ma hang" << setw(10) << left << "Ten Hang" << setw(10) << left << "Xuat Xu" << setw(10) << left << "Loai" << setw(10) << left << "So luong" << setw(10) << left << "TGBH" << endl;
        a[vt].Xuat();
    }
    else
    {
        cout << "\nKhong tim thay mat hang !" << endl;
    }

    return 0;
}