#include "NhanVien.h"

NhanVien::NhanVien() : hoTen(""), ngaySinh("") {}

NhanVien::NhanVien(string hoTen, string ngaySinh) : hoTen(hoTen), ngaySinh(ngaySinh) {}

void NhanVien::Nhap() {
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap ngay sinh: ";
    getline(cin, ngaySinh);
}

void NhanVien::Xuat() {
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
}

