#include <bits/stdc++.h>
using namespace std;

class Diem
{
private:
    double x, y;

public:
    friend istream &operator>>(istream &is, Diem &p)
    {
        cout << "Nhap tung do: ";
        is >> p.x;
        cout << "Nhap hoang do: ";
        is >> p.y;
        return is;
    }
    friend ostream &operator<<(ostream &os, Diem p)
    {
        os << "\nToa do diem: (" << p.x << " , " << p.y << ")\n";
        return os;
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


int main()
{
    int n;
    cout << "\nNhap so luong diem tren mat phang: ";
    cin >> n;
    Diem d[n];
    //
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin toa do diem thu " << i + 1 << " :\n";
        cin >> d[i];
    }
    cout << "\nDanh sach thong tin cac diem tren mat phang\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin toa do diem thu " << i + 1 << " :";
        cout << d[i];
    }
    //
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += d[i].khoangcach();
    }
    cout << "\nTong khoang cach tu tat ca cac diem tren den goc toa do = " << sum << endl;

    //
    double min_kc = d[0].khoangcach();
    int vt = 0;
    for (int i = 1; i < n; i++)
    {
        double kc = d[i].khoangcach();
        if (kc < min_kc)
        {
            min_kc = kc;
            vt = i;
        }
    }
    cout << "\nMot diem o gan goc toa do nhat co toa do la: (" << d[vt].getX() << " , " << d[vt].getY() << ")" << endl;
}