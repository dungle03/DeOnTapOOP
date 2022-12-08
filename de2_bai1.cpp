#include <bits/stdc++.h>
using namespace std;

class DaThuc
{
private:
    int n;
    double *a;

public:
    friend istream &operator>>(istream &input, DaThuc &p)
    {
        cout << "Nhap bac cua da thuc: ";
        cin >> p.n;
        p.a = new double[p.n + 1];

        cout << "Nhap da thuc (tu bac 0 -> bac n): "; // 1x^0 2x^1 3x^2 4x^3 5x^4
        for (int i = 0; i <= p.n; i++)
        {
            input >> p.a[i];
        }
        return input;
    }

    friend ostream &operator<<(ostream &output, DaThuc &p)
    {
        cout << "Da Thuc vua nhap la: ";
        for (int i = p.n; i >= 0; i--) // 5 4 3 12
        {
            if (i == 0)
            {
                cout << p.a[i] << endl;
                return output;
            }
            cout << p.a[i] << "x^" << i << " + ";
        }
        cout << endl;
        return output;
    }

    double Tinh_daoham(double x) // 1x^0 2x^1 3x^2 4x^3 5x^4
    {
        double kq = 0;
        for (int i = 1; i <= n; i++)
        {
            kq += i * a[i] * pow(x, i - 1);
        }

        return kq;
    }
};

int main()
{
    DaThuc a;
    cin >> a;
    cout << a;

    double x;
    cout << "\nNhap so thuc x:";
    cin >> x;
    cout << "\nGia tri dao ham tai x = " << x << " la " << a.Tinh_daoham(x); // 4x^3 + 3x^2 + 2x^1 + 1 -> 12x^2 + 6x + 2

    return 0;
}