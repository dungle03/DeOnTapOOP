#include <bits/stdc++.h>
using namespace std;

class HCN
{
private:
    double dai, rong;

public:
    void Nhap()
    {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    }
    void Xuat()
    {
        cout << dai << " " << rong << endl;
    }

    double Tinh_Dientich()
    {
        return dai * rong;
    }
};

int main()
{
    int n;
    cout << "Nhap so luong HCN: ";
    cin >> n;
    HCN a[n + 1];

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }

    cout << "\nCac HCN vua nhap la: " << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }

    //

    double kq = 0;
    for (int i = 0; i < n; i++)
    {
        kq += a[i].Tinh_Dientich();
    }

    cout << "Dien tich TB cua cac HCN tren = " << kq / (1.0 * n) << endl;

    //
    double Min = a[0].Tinh_Dientich();
    for (int i = 1; i < n; i++)
    {
        if (a[i].Tinh_Dientich() < Min)
        {
            Min = a[i].Tinh_Dientich();
        }
    }

    cout << "\nCac HCN co dien tich nho nhat la: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (Min == a[i].Tinh_Dientich())
        {
            a[i].Xuat();
        }
    }

    return 0;
}