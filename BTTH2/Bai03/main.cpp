#include "SoPhuc.cpp"

int main() 
{
    SoPhuc a, b;
    a.Nhap();
    b.Nhap();
    cout << "So phuc 1: ";
    a.Xuat();
    cout << "So phuc 2: ";
    b.Xuat();
    cout << "Tong 2 so phuc: ";
    a.Tong(b).Xuat();
    cout << "Hieu 2 so phuc: ";
    a.Hieu(b).Xuat();
    cout << "Tich 2 so phuc: ";
    a.Tich(b).Xuat();
    cout << "Thuong 2 so phuc: ";
    a.Thuong(b).Xuat();
    return 0;
}