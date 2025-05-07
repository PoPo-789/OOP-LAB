#include "BDSDat.h"

BDSDat::BDSDat()
{
    loaiDat = ' ';
}

BDSDat::BDSDat(string maGD, string ngayGD, long long donGia, double dienTich, char loaiDat) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->loaiDat = loaiDat;
}

void BDSDat::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai dat (A/B/C): ";
    cin >> loaiDat;
}

void BDSDat::Xuat() const
{
    BDS::Xuat();
    cout << "Loai dat: " << loaiDat << endl;
}

double BDSDat::thanhTien()
{
    if (loaiDat == 'A') 
        return getDonGia() * getDienTich() * 1.5;
    else 
        return getDonGia() * getDienTich();
}