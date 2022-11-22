#include <bits/stdc++.h>
using namespace std;

class MH
{
private:
    char tmh[30];
    int sl;
    float dg;

public:
    void nhap()
    {
        cout << "n ten mat hang";
        cin >> tmh;
        cout << "n so luong";
        cin >> sl;
        cout << "n don gia";
        cin >> dg;
    }
    void xuat()
    {
        cout << setw(20) << tmh;
        cout << setw(10) << sl;
        cout << setw(10) << dg;
    }

    float tien()
    {
        return (sl * dg);
    }
};

class HD : public MH
{
private:
    char thd[30];
    char dsmh[30];
    int slmh;

public:
    void nhap()
    {
        MH::nhap();
        cout << "n ten hoa don";
        cin >> thd;
        cout << "n danh sach mat hang";
        cin >> dsmh;
        cout << "n so luong mat hang";
        cin >> slmh;
    }
    float tongt(float *t, int n)
    {
        int s = 1;
        for (int i = 1; i < n; i++)
            s += MH::tien() + (*t + i);
        return s;
    }

    void In()
    {
        cout << setw(20) << thd;
        // cout << setiosflags() << setprecision(2);
        cout << setw(10) << dsmh;
        cout << setw(7) << tien();
        cout << setw(10) << slmh;
        // cout << setw(7) << tongt();
    }
};

// viet chuong trinh chinh
void main()
{
    HD *dshd;
    int n;
    float t; // danh sach cac hoa don can nhap
    cout << "n nhap cac hao don";
    cin >> n;
    dshd = new HD[n];
    // nhap gia tri cho danh sch hoa don
    for (int i = 1; i <= n; i++)
        dshd[i].nhap();
    cout << "n  danh sach hoa don:n";
    // xuat ra danh sach cac hoa don
    for (int i = 1; i <= n; i++)
        dshd[i].In();
    // dua ra tong tien
    cout << "n tong tien moi hoa don" << tongt(t, n);
    delete t;
    // dua ra hoa don co tong tien lon nhat
    int max = dshd[i].tongt();
    for (i = 1; i <= n; i++)
        if (dshd[i].tongt() > max)
            max = dshd[i].tongt();
    for (i = 1; i <= n; i++)
                        if (dshd[i].tongt()==max()
                                    dshd[i].In();
            //tim kiem 1 hoa don theo ten
            char timten[30]
                        cout<<"n nhap ten can tim:";
            cin>>timten;
            for (i=1;i<=n;i++)
                        if (dshd[i].thd==timten();
                        dshd[i].In();
            cin.ignore(2);
}