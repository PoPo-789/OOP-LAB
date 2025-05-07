#include "NhanVienSX.h"


NhanVienSX::NhanVienSX() : NhanVien(), soNgayLamViec(0) {}

NhanVienSX::NhanVienSX(string hoTen, string ngaySinh, int Luong, int soNgayLamViec) : NhanVien(hoTen, ngaySinh), soNgayLamViec(soNgayLamViec) {}

void NhanVienSX::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> soNgayLamViec;
}

int NhanVienSX::tinhLuong() {
    return soNgayLamViec * 100000; 
}

void NhanVienSX::Xuat() {
    NhanVien::Xuat();
    cout << "Luong: " << tinhLuong() << endl;
}