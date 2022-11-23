#include <bits/stdc++.h>
using namespace std;
class DaThuc
{
private:
    int n;
    double *a;

public:
    DaThuc()
    {
        n = 0;
        a = NULL;
    }

    ~DaThuc()
    {
        delete[] a;
    }

    friend istream &operator>>(istream &input, DaThuc &p)
    {
        cout << "Nhap bac da thuc : ";
        cin >> p.n;
        p.a = new double[p.n + 1];

        cout << "Nhap da thuc (tu bac 0 -> bac n) : ";
        for (int i = 0; i <= p.n; i++)
        {
            input >> p.a[i];
        }
        return input;
    }

    friend ostream &operator<<(ostream &output, DaThuc &p)
    {
        cout << "Da thuc vua nhap la: ";
        for (int i = p.n; i >= 0; i--)
        {
            if (i == 0)
            {
                output << p.a[i] << endl;
                return output;
            }
            output << p.a[i] << "x^" << i << " + ";
        }
        cout << endl;
        return output;
    }
    friend double gia_tri_bieuthuc(double t, DaThuc &p)
    {
        double s = 0;
        for (int i = 0; i <= p.n; i++)
        {
            s += p.a[i] * pow(t, i);
        }
        return s;
    }
};

int main()
{
    DaThuc A;
    cin >> A;
    cout << A;

    double d1, d2;
    cout << "Nhap d1 va d2:  ";
    cin >> d1 >> d2;

    // cout << gia_tri_bieuthuc(d1, A) << endl;
    // cout << gia_tri_bieuthuc(d2, A) << endl;

    double S = sqrt(gia_tri_bieuthuc(d1, A) + gia_tri_bieuthuc(d2, A));
    cout << "Gia tri bieu thuc S = " << S << endl;
}
