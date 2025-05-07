#include "BDSNha.h"


BDSNha::BDSNha()
{
    loaiNha = "";
    diaChi = "";
}

BDSNha::BDSNha(string maGD, string ngayGD, long long donGia, double dienTich, string loaiNha, string diaChi) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->loaiNha = loaiNha;
    this->diaChi = diaChi;
}

void BDSNha::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai nha: ";
    cin.ignore();
    getline(cin, loaiNha);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

void BDSNha::Xuat() const
{
    BDS::Xuat();
    cout << "Loai nha: " << loaiNha << endl;
    cout << "Dia chi: " << diaChi << endl;
}

double BDSNha::thanhTien()
{
    if (loaiNha == "cao cap") 
        return getDonGia() * getDienTich();
    else 
        return getDonGia() * getDienTich() * 0.9;
}
