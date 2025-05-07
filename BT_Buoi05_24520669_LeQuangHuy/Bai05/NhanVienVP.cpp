#include "NhanVienVP.h"

NhanVienVP::NhanVienVP() : NhanVien(), luongCanBan(0), soSanPham(0) {}

NhanVienVP::NhanVienVP(string hoTen, string ngaySinh, int Luong, int luongCanBan, int soSanPham) : NhanVien(hoTen, ngaySinh), luongCanBan(luongCanBan), soSanPham(soSanPham) {}

void NhanVienVP::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap luong can ban: ";
    cin >> luongCanBan;
    cout << "Nhap so san pham: ";
    cin >> soSanPham;
}

int NhanVienVP::tinhLuong() {
    return luongCanBan + soSanPham * 55000; 
}

void NhanVienVP::Xuat() {
    NhanVien::Xuat();
    cout << "LLuong: " << tinhLuong() << endl;
}

