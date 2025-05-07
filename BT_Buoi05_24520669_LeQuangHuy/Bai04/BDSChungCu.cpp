#include "BDSChungCu.h"


BDSChungCu::BDSChungCu()
{
    maCanHo = "";
    tang = 0;
}

BDSChungCu::BDSChungCu(string maGD, string ngayGD, long long donGia, double dienTich, string maCanHo, int tang) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->maCanHo = maCanHo;
    this->tang = tang;
}

void BDSChungCu::Nhap()
{
    BDS::Nhap();
    cout << "Nhap ma can ho: ";
    cin >> maCanHo;
    cout << "Nhap tang: ";
    cin >> tang;
}

void BDSChungCu::Xuat() const
{
    BDS::Xuat();
    cout << "Ma can ho: " << maCanHo << endl;
    cout << "Tang: " << tang << endl;
}

double BDSChungCu::thanhTien()
{
    if (tang == 1) 
        return getDonGia() * getDienTich() * 2;
    else if (tang >= 15)
        return getDonGia() * getDienTich() * 1.2;
    else 
        return getDonGia() * getDienTich();
}