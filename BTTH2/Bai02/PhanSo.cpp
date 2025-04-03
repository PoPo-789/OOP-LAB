#include "PhanSo.h"

PhanSo::PhanSo() // Khoi tao phan so
{
    iTu = 0;
    iMau = 1;
}

PhanSo::PhanSo(int iTu, int iMau) // Khoi tao phan so co tu va mau
{
    this->iTu = iTu;
    this->iMau = iMau;
    RutGon();
}

void PhanSo::Nhap() // Nhap phan so
{
    cout << "Nhap tu: ";
    cin >> iTu;
    cout << "Nhap mau: ";
    cin >> iMau;
}

void PhanSo::Xuat() // Xuat phan so
{
    cout << iTu << "/" << iMau << endl;
}

void PhanSo::RutGon() // Rut gon phan so
{
    int ucln = __gcd(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;
}

void PhanSo::Tong(PhanSo ps) // Cong 2 phan so
{
    iTu = iTu * ps.iMau + ps.iTu * iMau;
    iMau = iMau * ps.iMau;
    RutGon();
}

void PhanSo::Hieu(PhanSo ps) // Tru 2 phan so
{
    iTu = iTu * ps.iMau - ps.iTu * iMau;
    iMau = iMau * ps.iMau;
    RutGon();
}

void PhanSo::Tich(PhanSo ps) // Nhan 2 phan so
{
    iTu = iTu * ps.iTu;
    iMau = iMau * ps.iMau;
    RutGon();
}

void PhanSo::Thuong(PhanSo ps) // Chia 2 phan so
{
    iTu = iTu * ps.iMau;
    iMau = iMau * ps.iTu;
    RutGon();
}

void PhanSo::SoSanh(PhanSo ps) // So sanh 2 phan so
{
    if (iTu * ps.iMau > ps.iTu * iMau)
        cout << "Phan so 1 > Phan so 2" << endl;
    else if (iTu * ps.iMau < ps.iTu * iMau)
        cout << "Phan so 1 < Phan so 2" << endl;
    else
        cout << "Phan so 1 = Phan so 2" << endl;
}
