#include <bits/stdc++.h>
using namespace std;

class MatHang
{
private:
    string ma_hang;
    int don_gia;

public:
    MatHang()
    {
        ma_hang = "";
        don_gia = 0;
    }

    string get_mahang()
    {
        return ma_hang;
    }

    int get_dongia()
    {
        return don_gia;
    }

    void Nhap()
    {
        cin.ignore();
        cout << "Nhap ma hang: ";
        getline(cin, ma_hang);
        cout << "Nhap don gia: ";
        cin >> don_gia;
    }

    void Xuat()
    {
        cout << setw(10) << ma_hang << setw(10) << don_gia << endl;
    }
};

class HoaDon
{
private:
    string ma_hang;
    int so_luong;
    string ngay_ban;

public:
    HoaDon()
    {
        ma_hang = ngay_ban = "";
        so_luong = 0;
    }

    void Nhap()
    {
        cout << "Nhap ma hang: ";
        cin.ignore();
        getline(cin, ma_hang);
        cout << "Nhap so luong: ";
        cin >> so_luong;
        cout << "Nhap ngay ban: ";
        cin.ignore();
        getline(cin, ngay_ban);
    }

    string get_mahang()
    {
        return ma_hang;
    }

    int get_sl()
    {
        return so_luong;
    }

    string get_ngayban()
    {
        return ngay_ban;
    }

    void Xuat()
    {
        cout << setw(10) << ma_hang << setw(10) << so_luong << setw(10) << ngay_ban << endl;
    }
};

int main()
{
    MatHang *a;
    HoaDon *b;

    int m, n;
    cout << "Nhap m, n: ";
    cin >> m >> n;

    a = new MatHang[m];
    b = new HoaDon[n];
    //
    cout << "Nhap Cac Mat Hang" << endl;
    for (int i = 0; i < m; i++)
    {
        a[i].Nhap();
    }

    cout << "Nhap Cac Hoa Don" << endl;
    for (int i = 0; i < n; i++)
    {
        b[i].Nhap();
    }
    //
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].get_sl() > 10)
        {
            dem++;
        }
    }

    cout << "So hoa don co so luong > 10 la: " << dem << endl;
    //
    string ss;
    cout << "Nhap ngay can tinh tien: ";
    getline(cin, ss);

    float tongt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ss == b[i].get_ngayban())  // số lượng trong b, đơn giá trong a
        {
            for (int j = 0; j < m; j++)
            {
                if (a[j].get_mahang() == b[i].get_mahang())
                {
                    tongt += a[j].get_dongia() * b[i].get_sl();
                }
                
            }
            
        }
    }
    cout << "Tong tien ngay can tinh = " << tongt << endl;

    return 0;
}