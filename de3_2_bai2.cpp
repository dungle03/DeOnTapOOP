#include <bits/stdc++.h>
using namespace std;

class Thisinh
{
private:
    string hoten;
    double diem;

public:
    void Nhap()
    {
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Nhap diem: ";
        cin >> diem;
    }

    void Xuat()
    {
        cout << setw(15) << left << hoten;
        cout << setw(10) << left << diem;
    }

    double get_diem()
    {
        return diem;
    }
};

class Olympic : public Thisinh
{
private:
    char truong;

public:
    void Nhap()
    {
        Thisinh ::Nhap();
        cout << "Nhap truong (A/B/C): ";
        cin >> truong;
    }

    void Xuat()
    {
        Thisinh::Xuat();
        cout << setw(10) << left << truong << endl;
    }

    char get_truong()
    {
        return truong;
    }
};

int main()
{
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    Olympic a[n + 1];
    //

    for (int i = 0; i < n; i++)
    {
        a[i].Nhap();
    }

    cout << "\nDanh sach thi sinh vua nhap la: " << endl;
    cout << setw(15) << left << "Ho ten" << setw(10) << left << "Diem" << setw(10) << left << "Truong" << endl;

    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    //
    double tong[3] = {};
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_truong() == 'A')
        {
            tong[0] += a[i].get_diem();
        }

        else if (a[i].get_truong() == 'B')
        {
            tong[1] += a[i].get_diem();
        }
        else if (a[i].get_truong() == 'C')
        {
            tong[2] += a[i].get_diem();
        }
    }

    cout << "\nTong diem cac truong la: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Truong " << (char)('A' + i) << " " << tong[i] << " diem" << endl;
    }

    //
    int dem[3] = {};
    for (int i = 0; i < n; i++)
    {
        if (a[i].get_truong() == 'A')
        {
            dem[0]++;
        }

        else if (a[i].get_truong() == 'B')
        {
            dem[1]++;
        }
        else if (a[i].get_truong() == 'C')
        {
            dem[2]++;
        }
    }

    cout << "\nThong ke so luong sinh vien tham du cua cac truong: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Truong " << (char)('A' + i) << " co " << dem[i] << " sv" << endl;
    }

    return 0;
}