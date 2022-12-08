#include <bits/stdc++.h>
using namespace std;

class ToaDo
{
private:
    double x, y;

public:
    void Nhap()
    {
        cout << "Nhap hoanh do: ";
        cin >> x;
        cout << "Nhap tung do: ";
        cin >> y;
    }

    void Xuat()
    {
        cout << "\nToa do Diem: (" << x << " , " << y << ")\t";
    }

    double khoangcach()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};

class DiemMau : public ToaDo
{
private:
    int mamau;

public:
    void Nhap()
    {
        ToaDo ::Nhap();
        cout << "Nhap ma mau (1/2/3): ";
        cin >> mamau;
    }
    void Xuat()
    {
        ToaDo::Xuat();
        cout << mamau << endl;
    }

    int get_mamau()
    {
        return mamau;
    }
};

int main()
{
    int n;
    cout << "\nNhap so luong diem: ";
    cin >> n;

    DiemMau a[n];

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }

    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }

    //
    int check[3] = {};
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_mamau() == 1)
        {
            check[0]++;
        }
        else if (a[i].get_mamau() == 2)
        {
            check[1]++;
        }
        else if (a[i].get_mamau() == 3)
        {
            check[2]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\nMa mau " << i + 1 << " co: " << check[i] << " diem";
    }
    //

    double max_kc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].khoangcach() > max_kc)
        {
            max_kc = a[i].khoangcach();
        }
    }

    cout << "\nCac diem co khoang cach lon nhat den goc toa do: " << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i].khoangcach() == max_kc)
        {
            a[i].Xuat();
        }
    }

    return 0;
}