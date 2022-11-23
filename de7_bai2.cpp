#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
private:
    string hoten;
    int tuoi;

public:
    string get_hoten()
    {
        return hoten;
    }
    int get_tuoi()
    {
        return tuoi;
    }
    void Nhap()
    {
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Nhap tuoi: ";
        cin >> tuoi;
    }
    void Xuat()
    {
        cout << setw(20) << left << hoten << setw(10) << left << tuoi;
    }
};

class NhanVien : public Nguoi
{
private:
    double heso;
    int loai;

public:
    static double lcb;

    void Nhap()
    {
        Nguoi ::Nhap();

        cout << "Nhap he so luong chinh: ";
        cin >> heso;
        cout << "Nhap loai (1, 2, 3): ";
        cin >> loai;
    }
    void Xuat()
    {
        Nguoi ::Xuat();
        cout << setw(10) << left << loai << endl;
    }

    int get_loai()
    {
        return loai;
    }

    double tinh_luong(double luong2)
    {
        return lcb * heso + luong2;
    }
};

double NhanVien ::lcb = 5000;

int main()
{
    // Nhap n nhan vien
    NhanVien *a;
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    if (n == 0)
    {
        return 0;
    }

    a = new NhanVien[n + 1];

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }
    cout << endl;

    // Tinh luong cac nhan vien
    double luong2[3] = {3000, 2000, 1000};
    cout << setw(20) << left << "Ho ten" << setw(10) << left << "Luong" << endl;

    double tien[n + 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_loai() == 1)
        {
            tien[i] = a[i].tinh_luong(luong2[0]);
            cout << setw(20) << left << a[i].get_hoten() << setw(10) << left << tien[i] << endl;
        }
        else if (a[i].get_loai() == 2)
        {
            tien[i] = a[i].tinh_luong(luong2[1]);
            cout << setw(20) << left << a[i].get_hoten() << setw(10) << left << tien[i] << endl;
        }

        else if (a[i].get_loai() == 3)
        {
            tien[i] = a[i].tinh_luong(luong2[2]);
            cout << setw(20) << left << a[i].get_hoten() << setw(10) << left << tien[i] << endl;
        }
    }

    // Tim nhan vien co luong cao nhat
    double Max = 0;

    for (int i = 0; i < n; i++)
    {
        if (tien[i] > Max)
        {
            Max = tien[i];
        }
    }

    cout << "\nNhan vien co luong cao nhat la: " << endl;
    cout << setw(20) << left << "Ho ten" << setw(10) << left << "Luong" << endl;

    for (int i = 0; i < n; i++)
    {
        if (tien[i] == Max)
        {
            cout << setw(20) << left << a[i].get_hoten() << setw(10) << left << tien[i] << endl;
        }
    }

    return 0;
}