#include "BookTK.h"


BookTK::BookTK()
{
    Thue = 0;
}

BookTK::BookTK(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan, int Thue) : Book(maSach, ngayNhap, donGia, soLuong, nhaXuatBan)
{
    this->Thue = Thue;
}

void BookTK::nhapThongTin()
{
    Book::nhapThongTin();
    cout << "Nhap thue: ";
    cin >> Thue;
}

void BookTK::xuatThongTin() const
{
    Book::xuatThongTin();
    cout << "Thue: " << Thue << endl;
}

double BookTK::tinhThanhTien()
{
    return getDonGia() * getSoLuong() + Thue;
}