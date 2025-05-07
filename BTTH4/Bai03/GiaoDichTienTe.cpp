#include "GiaoDichTienTe.h"


GiaoDichTienTe::GiaoDichTienTe()
{
    loaiTienTe = "";
}

GiaoDichTienTe::GiaoDichTienTe(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiTienTe, long long tyGia) : GiaoDich(maGD, ngayGD, soLuong, donGia)
{
    this->loaiTienTe = loaiTienTe;
}

void GiaoDichTienTe::Nhap()
{
    GiaoDich::Nhap();
    cout << "Nhap loai tien te: ";
    cin >> loaiTienTe;
}

void GiaoDichTienTe::Xuat() const
{
    GiaoDich::Xuat();
    cout << "Loai tien te: " << loaiTienTe << endl;
}