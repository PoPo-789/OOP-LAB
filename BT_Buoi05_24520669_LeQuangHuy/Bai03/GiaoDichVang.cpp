#include "GiaoDichVang.h"

GiaoDichVang::GiaoDichVang()
{
    loaiVang = "";
}

GiaoDichVang::GiaoDichVang(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiVang) : GiaoDich(maGD, ngayGD, soLuong, donGia)
{
    this->loaiVang = loaiVang;
}

void GiaoDichVang::Nhap()
{
    GiaoDich::Nhap();
    cout << "Nhap loai vang: ";
    cin >> loaiVang;
}

void GiaoDichVang::Xuat() const
{
    GiaoDich::Xuat();
    cout << "Loai vang: " << loaiVang << endl;
}
