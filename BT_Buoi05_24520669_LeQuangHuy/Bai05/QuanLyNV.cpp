#include "QuanLyNV.h"

QuanLyNV::QuanLyNV() : dsVP(nullptr), dsSX(nullptr), nVP(0), nSX(0) {}

QuanLyNV::QuanLyNV(int nVP, int nSX) : nVP(nVP), nSX(nSX) {
    dsVP = new NhanVienVP[nVP];
    dsSX = new NhanVienSX[nSX];
}

QuanLyNV::~QuanLyNV() {
    delete[] dsVP;
    delete[] dsSX;
}

void QuanLyNV::NhapDSVP() {
    cout << "Nhap so luong nhan vien van phong: ";
    cin >> nVP;
    dsVP = new NhanVienVP[nVP];
    for (int i = 0; i < nVP; ++i) {
        cout << "Nhap thong tin nhan vien van phong " << i + 1 << ":" << endl;
        dsVP[i].Nhap();
    }
}

void QuanLyNV::NhapDSSX() {
    cout << "Nhap so luong nhan vien san xuat: ";
    cin >> nSX;
    dsSX = new NhanVienSX[nSX];
    for (int i = 0; i < nSX; ++i) {
        cout << "Nhap thong tin nhan vien san xuat " << i + 1 << ":" << endl;
        dsSX[i].Nhap();
    }
}

void QuanLyNV::XuatDSVP() {
    cout << "Danh sach nhan vien van phong:" << endl;
    for (int i = 0; i < nVP; ++i) {
        dsVP[i].Xuat();
    }
}

void QuanLyNV::XuatDSSX() {
    cout << "Danh sach nhan vien san xuat:" << endl;
    for (int i = 0; i < nSX; ++i) {
        dsSX[i].Xuat();
    }
}

void QuanLyNV::TinhTongLuongCTYPhaiTra() {
    int tongLuong = 0;
    for (int i = 0; i < nVP; ++i) {
        tongLuong += dsVP[i].tinhLuong();
    }
    for (int i = 0; i < nSX; ++i) {
        tongLuong += dsSX[i].tinhLuong();
    }
    cout << "Tong luong cong ty phai tra: " << tongLuong << endl;
}

void QuanLyNV::MENU() {
    int choice;
    do {
        cout << "1. Nhap danh sach nhan vien van phong" << endl;
        cout << "2. Nhap danh sach nhan vien san xuat" << endl;
        cout << "3. Xuat danh sach nhan vien van phong" << endl;
        cout << "4. Xuat danh sach nhan vien san xuat" << endl;
        cout << "5. Tinh tong luong cong ty phai tra" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice) {
            case 1:
                NhapDSVP();
                break;
            case 2:
                NhapDSSX();
                break;
            case 3:
                XuatDSVP();
                break;
            case 4:
                XuatDSSX();
                break;
            case 5:
                TinhTongLuongCTYPhaiTra();
                break;
            case 0:
                cout << "Thoat!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);
}