#include "BDS.h"

BDS::BDS()
{
    maGD = "";
    ngayGD = "";
    donGia = 0;
    dienTich = 0;
}

BDS::BDS(string maGD, string ngayGD, long long donGia, double dienTich)
{
    this->maGD = maGD;
    this->ngayGD = ngayGD;
    this->donGia = donGia;
    this->dienTich = dienTich;
}

void BDS::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> maGD;
    cout << "Nhap ngay giao dich: ";
    cin >> ngayGD;
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap dien tich: ";
    cin >> dienTich;
}

void BDS::Xuat() const
{
    cout << "Ma giao dich: " << maGD << endl;
    cout << "Ngay giao dich: " << ngayGD << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Dien tich: " << dienTich << endl;
}