#include "BookGK.h"

BookGK::BookGK()
{
    tinhTrang = "";
}

BookGK::BookGK(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan, string tinhTrang) : Book(maSach, ngayNhap, donGia, soLuong, nhaXuatBan)
{
    this->tinhTrang = tinhTrang;
}

void BookGK::nhapThongTin()
{
    Book::nhapThongTin();
    cout << "Nhap tinh trang: ";
    cin >> tinhTrang;
}

void BookGK::xuatThongTin() const
{
    Book::xuatThongTin();
    cout << "Tinh trang: " << tinhTrang << endl;
}

double BookGK::tinhThanhTien()
{
    if (tinhTrang == "moi")
        return getDonGia() * getSoLuong();
    else if (tinhTrang == "cu")
        return getDonGia() * getSoLuong() * 0.5;
    else
        return 0; 
}