#include "GiaoDich.h"

GiaoDich::GiaoDich()
{
    maGD = "";
    ngayGD = "";
    soLuong = 0;
    donGia = 0;
}

GiaoDich::GiaoDich(string maGD, string ngayGD, long long soLuong, long long donGia)
{
    this->maGD = maGD;
    this->ngayGD = ngayGD;
    this->soLuong = soLuong;
    this->donGia = donGia;
}

void GiaoDich::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> maGD;
    cout << "Nhap ngay giao dich: ";
    cin >> ngayGD;
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
}

void GiaoDich::Xuat() const
{
    cout << "Ma giao dich: " << maGD << endl;
    cout << "Ngay giao dich: " << ngayGD << endl;
    cout << "So luong: " << soLuong << endl;
    cout << "Don gia: " << donGia << endl;
}

