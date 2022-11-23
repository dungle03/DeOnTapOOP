#include <bits/stdc++.h>
using namespace std;
class Dayso
{
private:
    int n;
    int *a;

public:
    Dayso()
    {
        n = 0;
        a = NULL;
    }

    ~Dayso()
    {
        delete[] a;
    }

    friend istream &operator>>(istream &input, Dayso &p)
    {
        cout << "Nhap n:" << endl;
        cin >> p.n;
        p.a = new int[p.n + 1];

        cout << "Nhap day so:" << endl;
        for (int i = 0; i < p.n; i++)
        {
            input >> p.a[i];
        }
        return input;
    }
    friend ostream &operator<<(ostream &output, Dayso &p)
    {
        cout << "Day so vua nhap la: ";
        for (int i = 0; i < p.n; i++)
        {
            output << p.a[i] << " ";
        }
        return output;
    }
    double tbc(Dayso &p)
    {
        int tong = 0, dem = 0;
        for (int i = 0; i < p.n; i++)
        {
            if (p.a[i] > 0)
            {
                tong += p.a[i];
                dem++;
            }
        }
        return (1.0 * tong / dem);
    }
    int Dem_SoChinhPhuong(Dayso &p)
    {
        int dem = 0;
        for (int i = 0; i < p.n; i++)
        {
            int sqr = sqrt(p.a[i]);
            if (sqr * sqr == p.a[i])
            {
                dem++;
            }
        }
        return dem;
    }
};

int main()
{
    Dayso A;
    cin >> A;
    cout << A << endl;

    cout << "TBC cac so duong = " << A.tbc(A) << endl;
    cout << "So chinh phuong co trong day la: " << A.Dem_SoChinhPhuong(A) << endl;
}