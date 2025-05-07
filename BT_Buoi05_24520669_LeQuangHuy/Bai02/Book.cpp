#include "Book.h"

Book::Book()
{
    maSach = "";
    ngayNhap = "";
    donGia = 0.0;
    soLuong = 0;
    nhaXuatBan = "";
}

Book::Book(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan)
{
    this->maSach = maSach;
    this->ngayNhap = ngayNhap;
    this->donGia = donGia;
    this->soLuong = soLuong;
    this->nhaXuatBan = nhaXuatBan;
}

void Book::nhapThongTin()
{
    cout << "Nhap ma sach: ";
    cin >> maSach;
    cout << "Nhap ngay nhap: ";
    cin >> ngayNhap;
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap nha xuat ban: ";
    cin.ignore();
    getline(cin, nhaXuatBan);
}

void Book::xuatThongTin() const
{
    cout << "Ma sach: " << maSach << endl;
    cout << "Ngay nhap: " << ngayNhap << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "So luong: " << soLuong << endl;
    cout << "Nha xuat ban: " << nhaXuatBan << endl;
}
