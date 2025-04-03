#include "PhanSo.cpp"

int main()
{
    PhanSo a, b;
    a.Nhap();
    b.Nhap();
    cout << "Phan so 1: ";
    a.Xuat();
    cout << "Phan so 2: ";
    b.Xuat();
    cout << "Phan so 1 sau rut gon: ";
    a.RutGon();
    a.Xuat();
    cout << "Phan so 2 sau rut gon: ";
    b.RutGon();
    b.Xuat();
    cout << "Tong 2 phan so: ";
    a.Tong(b);
    a.Xuat();
    cout << "Hieu 2 phan so: ";
    a.Hieu(b);
    a.Xuat();
    cout << "Tich 2 phan so: ";
    a.Tich(b);
    a.Xuat();
    cout << "Thuong 2 phan so: ";
    a.Thuong(b);
    a.Xuat();
    cout << "So sanh 2 phan so: ";
    a.SoSanh(b);
    return 0;
}